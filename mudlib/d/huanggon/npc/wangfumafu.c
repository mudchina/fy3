inherit NPC;
void create()
{
   set_name("王府马夫",({"ma fu"}));
   set("gender","男性");
   set("age",43);
   set("combat_exp",8000);
   set("force",100);
   set("max_force",100);
   set("force_factor",13);
   set("chat_chance",3);
   set("chat_msg",({
   "马夫道:这几天我听人说,佛堂中有什么东西在.\n",
   "马夫道:听说石牢内的铁栏杆只有一把刀和一把剑能砍开.\n",
   "马夫道:要少喝酒,不抽烟,才能长寿.\n",
   }));
   
   set_skill("unarmed",15);
   set_skill("parry",15);
   set_skill("dodge",15);
   setup();
   add_money("silver",4);
   carry_object("/obj/cloth")->wear();
 }