inherit NPC;
void create()
{
   set_name("索额图",({"suo etu"}));
   set("gender","男性");
   set("age",45);
   set("combat_exp",2000);
   set("mingwang",4000);
   
   set_skill("unarmed",20);
   set_skill("parry",20);
   set_skill("dodge",20);
   set_skill("literate",50);
   set("chat_chance",4);
   set("chat_msg",({
  "索额图道:明珠大人,你怎么看平西王此人?\n",
  "索额图道:明珠大人慧眼识珠,好生令人佩服.\n",
  "索额图道:皇上对西藏和蒙古的事情好生担忧哪.\n",
  }));
   
   setup();
   add_money("silver",10);
}