#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("²èºø", ({ "tee_pot" }) );
        set("long",
HIM"Ðê¡£\n"NOR);
        set("unit", "¸ö");
        set("weight", 50);
        set("value", 10000);
}
void init()
{
          add_action("do_huifu", "huifu");
          add_action("do_bian", "bian");
}
  int do_huifu(string arg)
{
        object ob;
        ob=this_player();
        ob->set("kee",(int)ob->query("max_kee"));
        ob->set("gin",(int)ob->query("max_gin"));
        ob->set("sen",(int)ob->query("max_sen"));
        ob->set("eff_kee",(int)ob->query("max_kee"));
        ob->set("eff_gin",(int)ob->query("max_gin"));
        ob->set("eff_sen",(int)ob->query("max_sen"));
        ob->set("force", (int)ob->query("max_force")*2);
//        ob->set("mana", (int)ob->query("max_mana")*2);
        ob->set("food",((int)ob->query("str")-10)*10+200);
        ob->set("water",((int)ob->query("str")-10)*10+200);
       return 1;
}
  int do_bian(string arg)
{
               object me,npc;
            me = this_player();
   if(!arg)                return notify_fail("ÄãÒªÊ²Ã´£¿(menke,tianchi)\n");
        switch(arg)
{
         case "menke":
     npc = present("menke_npc",me);
            if(!npc) {               
                      npc = new("/d/zhongzhou/npc/xiaohai");
                     npc->move(me);
}
break;
         case "tianchi":
     npc = present("tianchi_npc",me);
            if(!npc) {               
                     npc = new("/d/city/npc/liumang");
                     npc->move(me);
break;
}
return 1;
}
}
