#include <ansi.h>
inherit ITEM;

int peck(string arg);
void create()
{
    set_name("九天浣花神箭",({"arrow"}));
    set_weight(1500);
    if(clonep())
   set_default_object(__FILE__);
    else {
   set("unit","支");
   set("value",10000);
   set("long","一枝生铁长箭，尾部打造成雁翎状。
可以用(peck arrow)的手法发出.\n");
   set("material", "iron");
    }
    setup();
}
void init()
{
      add_action("peck","peck");
}
int peck(string arg)
{
   object player,obj,env,bird;
     player=this_player();
     obj=this_object();
   if (!arg) return notify_fail("你要扔出什么东西?\n");
   if (!living(player)||environment(obj)!=player) return notify_fail("");
           env=environment(player);
    if (!env->query("outdoors"))    
               return notify_fail("九天浣花神箭只能在室外发出!\n");
bird=present("tu jiu",env);
if (!bird) bird=present("hei jiu",env);
if (!bird) bird=present("bai diao",env);
if (bird) {
 message_vision("$N一抖手,九天浣花神箭电闪而出,正中$n的脖子.",player,bird);
 bird->die();
 return 1;
 destruct(obj);
}
else
        message_vision("$N一抖手发出$n.\n",player,obj);
   		message("channel:rumor", 
YEL"【谣言】"+ "一枝九天浣花神箭在"+env->query("short")+"上空爆出千万朵火树银花。\n"NOR,users());
destruct(obj);
return 1;
}
