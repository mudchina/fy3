// Mr.music yangzhou 善缘箱 

inherit ITEM;

void create()
{
	set_name("善缘箱", ({ "shanyuanxiang", "xiang", "box" }) );
	set_weight(4000);
	set_max_encumbrance(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "只");
                set("long", "箱上写着：善缘广泽。\n");
		set("value", 10);
		set("material", "wood");
		set("no_get",1);
		set("no_drop",1);
		set("amount",30);
	}
	setup();
}

int is_container() { return 1; }

void init()
{
	add_action("do_put", "put");
}

int do_put(string arg)
{
	object me, obj;
	string item, target; 
	int amount;

	me = this_player();

	if(!arg) return notify_fail("你把这东西放进去？\n");

	if( sscanf(arg, "%s in %s", item, target)!=2 
	||  sscanf(item, "%d %s", amount, item)!=2
	||  !objectp(obj = present(item, me)) )

	return notify_fail("你想要干什么？\n");

	if( obj->query("money_id") == "silver" 
	&& amount >= 10 ) 
	{
         return notify_fail("你顿时感到一阵轻松.\n");  
        }

	return 0;
}
