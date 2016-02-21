// ni kuai.c by tianson
#include <weapon.h>
inherit HAMMER;
void create()
{
        set_name("泥块",({"ni kuai", "ni"}));
        set_weight(2000);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long","
一大块儿泥球，看起来圆滚滚，在手中掂掂，还满沉的。
你觉得里面好像包了什么东西，也不知能不能砸开。\n");
                set("unit","个");
                set("value",0);
                set("material","stone");
                set("wield_msg","$N把$n举了起来，觉得很不顺手，干脆抱在怀中。\n");
                set("unwield_msg","$N把$n放了下来，甩了甩酸痛的手。\n");
        }
        init_hammer(5);
        setup();
}
void init()
{
        add_action("do_za", "za");
}
int do_za(string arg){
        object ob;
        object me=this_player();
        object weapon = me->query_temp("weapon");

        int myeffstr=me->query("str")+me->query("force_factor");
        int mykar=me->query_kar(), diff=40-mykar, percentage;
        int mymaxkee=me->query("max_kee");
 
        if (!arg || (arg != "ni kuai"))
                return notify_fail("你要砸什么？\n");
        if (me->is_busy()) return notify_fail("你忙着呢！\n");
        if( (int)me->query("eff_kee") < (int)me->query("max_kee") / 2 )
                return notify_fail("你先治一治伤再想着别的吧。\n");
        if (weapon)
                return notify_fail("还是空手砸的好，万一里面有东西，拿家伙岂不弄坏了。\n");
        if (myeffstr<40)
        {
          message_vision("$N砸得手生疼，可泥块儿仍不见半丝裂纹。\n", me);
          return 1;
        }
        
       message_vision("$N运足气，挥掌向泥块儿砸去，泥块儿被砸得四分五裂，碎掉了。\n", me);
       message_vision("只听“哎哟”一声，$N手掌被碎的泥块儿割出了血，伤得颇重。\n", me);
       message_vision("好像什么东西掉了出来。\n");
       percentage=diff/3;
       me->receive_wound("kee", mymaxkee*percentage/200);
       if(random(me->query("kar"))<25)
         if(random(me->query("kar"))<20)
            if(random(me->query("kar"))<15)
              {ob=new("/open/tianson/nikuai/lanni.c");
               ob->move(environment(me));
               message_vision("$N发现竟是一团烂泥，于是失望地叹了口气。\n",me);
               destruct(this_object());
               return 1;
              }
            else{
               ob=new("/obj/money/silver.c");
               ob->set_amount(10);
               ob->move(environment(me));
               message_vision("$N低头一看，嘿，十两银子，趁人不注意，快捡吧。\n",me);
               destruct(this_object());
               return 1;
              }
          else{
             ob=new("/obj/money/silver.c");
             ob->set_amount(50);
             ob->move(environment(me));
             message_vision("$N低头一看，嘿，五十两银子，有人在也顾不上了，快捡吧。\n",me);
             destruct(this_object());
             return 1;
            }
        else{
           ob=new("/obj/money/gold.c");
           ob->move(environment(me));
           message_vision("$N低头一看，哇，金子，$N一下子扑在了金子上。别人都眼馋了，快捡吧。\n",me);
           destruct(this_object());
           return 1;
           }
}

