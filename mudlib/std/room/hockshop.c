// hockshop.c

inherit ROOM;

static object storage;

void remove()
{
        if( storage ) destruct(storage);
}

void setup()
{
        seteuid(getuid());
/*        if( !storage ) {*/
                storage = new(__DIR__"hockshop_storage");
                storage->set("shop_ob", this_object());
/*        }*/ 
}

void init()
{
        add_action("do_value", "value");
/*        add_action("do_pawn", "pawn");*/
        add_action("do_sell", "sell");
/*        add_action("do_retrieve", "retrieve");*/
        add_action("do_list", "list");
        add_action("do_buy", "buy");
}

string value_string(int value)
{
        if( value < 1 ) value = 1;
        else if( value < 100 )
                return chinese_number(value) + "文钱";
        else
                return chinese_number(value/100) + "两"
                        + (value%100? "又" + chinese_number(value%100) + "文钱": "");
}

void pay_player(object who, int amount)
{
        object ob;

        if( amount < 1 ) amount = 1;
/*        if( amount/1000000 ) {
                ob = new(TECASH_OB);
                ob->set_amount(amount/1000000);
                ob->move(who);
                amount %= 1000000;
        }
*/
        if( amount/100000 ) {
                ob = new(THCASH_OB);
                ob->set_amount(amount/100000);
                ob->move(who);
                amount %= 100000;
        }
        if( amount/10000 ) {
                ob = new(GOLD_OB);
                ob->set_amount(amount/10000);
                ob->move(who);
                amount %= 10000;
        }
        if( amount/100 ) {
                ob = new(SILVER_OB);
                ob->set_amount(amount/100);
                ob->move(who);
                amount %= 100;
        }
        if( amount ) {
                ob = new(COIN_OB);
                ob->set_amount(amount);
                ob->move(who);
        }
}

int do_value(string arg)
{
        object ob;
        int value;

        if( !arg || !(ob = present(arg, this_player())) )
                return notify_fail("你要拿什麽物品给当铺估价？\n");

        if( ob->query("money_id") )
                return notify_fail("这是「钱」，你没见过吗？\n");

        value = ob->query("value");
        if( !value ) printf("%s一文不值。\n", ob->query("name"));
        else 
/*                printf("%s价值%s。\n如果你要典当(pawn)，可以拿到%s及一张当票。\n如果卖断(sell)，可以拿到%s。\n",*/
/*                        ob->query("name"), value_string(value),*/
/*                        value_string(value * 60 / 100), value_string(value * 80 / 100));*/
                printf("%s价值%s。\n如果卖掉(sell)，可以拿到%s。\n",
                        ob->query("name"), value_string(value),
                        value_string(value * 80 / 100));

        return 1;
}

int do_pawn(string arg)
{
        object ob, stamp;
        int value;

        if( !arg || !(ob = present(arg, this_player())) )
                return notify_fail("你要典当什麽物品？\n");

        if( ob->query("money_id") )     return notify_fail("你要当「钱」？\n");

        value = ob->query("value");
        if( !value ) return notify_fail("这样东西不值钱。\n");

        if (ob->query("no_sell")) return notify_fail("这样东西不能典当。\n");

        message_vision("$N把身上的" + ob->query("name") + "拿出来典当了"
                + value_string(value * 60 / 100) + "，换得一张当票。\n", this_player());

        pay_player(this_player(), value * 60 / 100);
        ob->move(storage);
        stamp = new("/obj/pawn_stamp");
        stamp->set("pawned_item", ob);
        stamp->set("long", "兹收到\n    " + this_player()->name(1)
                + "典当" + ob->name() + "乙" + ob->query("unit")
                + "讫，破烂缺损不堪。\n    赎回应付" + value_string(value * 120/100)
                + "整，一手交钱，一手交货。\n");
        stamp->move(this_player());

        return 1;
}

int do_sell(string arg)
{
        object ob;
        int value;

        if( !arg || !(ob = present(arg, this_player())) )
                return notify_fail("你要卖断什麽物品？\n");

        if( ob->query("money_id") )     return notify_fail("你要卖「钱」？\n");
        value = ob->query("value");
        if( !value ) return notify_fail("这样东西不值钱。\n");

        if (ob->query("no_sell")) return notify_fail("这样东西不能卖。\n");

        message_vision("$N把身上的" + ob->query("name") + "卖掉。\n",
                this_player());

        pay_player(this_player(), value * 80 / 100);

	ob->add("pawned_time", 1);
	ob->move(storage);
/*
        if( storage ) {
                int s;

                // Make a simple storage management, when we have more goods in
                // storage, only keeps higher price goods.
                s = sizeof(all_inventory(storage));
                if( value >= (s / 20) * 1000 ) {
                        ob->add("pawned_time", 1);
                        ob->move(storage);
                }
                else destruct(ob);
        }
        else destruct(ob);
*/
        return 1;
}

int do_retrieve(string arg)
{
        object stamp, ob;
        int value;

        if( !arg || arg=="" || !(stamp = present(arg, this_player())) )
                return notify_fail("你要赎回哪一张当票上的典物？\n");

        if( !stamp->id("pawn stamp") )
                return notify_fail("这不是当票。\n");

        if( !(ob = stamp->query("pawned_item")) ) {
                write("这张当票上的典物因为你太久没有来赎，已经被当铺卖掉了。\n");
                write("你随手将当票撕掉扔了。\n");
                destruct(stamp);
                return 1;
        }

        if( !present(ob, storage) )
                return notify_fail("这不是这家当铺开出的当票。\n");

        value = (int)ob->query("value") * 120 / 100;
        if( (int)this_player()->can_afford(value) != 1 )
                return notify_fail("你身上的(零)钱不够。\n");

        message_vision("$N取出当票，花了" + value_string(value) + "赎回了"
                + ob->name() + "。\n", this_player());

        this_player()->pay_money(value);
        ob->move(this_player());
        ob->delete("pawned_time");
        destruct(stamp);

        return 1;
}

int do_list(string arg)
{
        object *inv;
        string msg;

        if( !storage ) return notify_fail("当铺里现在没有货物。\n");
        inv = filter_array( all_inventory(storage), (: $1->query("pawned_time") :));
        if( !sizeof(inv) ) return notify_fail("当铺里现在没有货物。\n");

        msg = "当铺里现在有以下货物：\n";
	msg +=  "-----------------------------------------------------------------------------\n  ";
        msg += implode( map_array(inv, (: sprintf("%-50s%s", $1->short(),
                value_string((int)$1->query("value") * 2)) :)), "\n  ");
        msg += "\n";
	write(msg);
/*        this_player()->start_more(msg);*/

/*        msg = "当铺里现在有以下货物：\n  ";
        msg += implode( map_array(inv, (: sprintf("%-30s%s", $1->short(),
                value_string((int)$1->query("value") * 2)) :)), "\n  ");
        msg += "\n";
        this_player()->start_more(msg);
*/
        return 1;
}

int do_buy(string arg)
{
        int index;
        object *inv, ob;

        if( !arg ) return notify_fail("你要买什麽东西？\n");

        if( !storage ) return notify_fail("当铺里现在没有货物。\n");
        inv = filter_array( all_inventory(storage), (: $1->query("pawned_time") :));
        if( !sizeof(inv) ) return notify_fail("当铺里现在没有货物。\n  ");

// This is a crasher! Dunno why .... Annihilator(11/01/95)
//      if( !parse_command(arg, inv, "%o", ob) )
//              return notify_fail("你要买什麽东西？\n");

        if( sscanf(arg, "%s %d", arg, index) != 2 ) index = 1;
        index--;
        for(int i=0; i<sizeof(inv); i++)
                if( inv[i]->id(arg) && !(index--)) break;

        if( i==sizeof(inv) )
                return notify_fail("你要买什麽东西？\n");
        ob = inv[i];

        if( (int)this_player()->can_afford((int)ob->query("value") * 2) != 1 )
                return notify_fail("你的(零)钱不够。\n");
        message_vision("$N掏出钱买下一" + ob->query("unit") + ob->name() + "。\n",
                this_player() );
        this_player()->pay_money((int)ob->query("value") * 2);
        ob->delete("pawned_time");
        ob->move(this_player());

        return 1;
}

