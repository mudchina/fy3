#include <ansi.h>
inherit NPC;
void create()
{    
      set_name("东坡居士",({"dongpo","jushi"}));
      set("gender","男性");
      set("age",45);
      set("shen_type",1);
      set("long","苏东坡文学渊博,自有一股慑人气度!");
      set("str",16);
      set("chat_chance",6);
      set("chat_msg",({
             HIC+"六桥横绝天汉上，北山始与南山通。\n"+NOR,
       HIC+"忽惊二十五万丈，老葑席卷苍云空！\n"+NOR,
     }));
      set("combat_exp",10000+random(30000));
      set_skill("unarmed",10+random(20));
      set_skill("dodge",10+random(20));
      set_skill("literate",160);
      setup();
      carry_object("/obj/cloth")->wear();
      add_money("gold",1);
}