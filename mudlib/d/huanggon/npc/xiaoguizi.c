inherit NPC;
void create()
{
   set_name("小桂子",({"xiao guizi"}));
   set("gender","中性");
   set("age",14);
   set("combat_exp",200);
   
   set_skill("unarmed",5);
   set_skill("parry",5);
   set_skill("dodge",5);
   set("chat_chance",5);
   set("chat_msg",({
 "小桂子道:当了太监好,吃穿不用跑.\n",
 "小桂子道:要想见皇上的,住大屋子的,跟我当太监来哪.\n",
 "小桂子道:当了太监,老婆就管不着啦,有多好.\n",
 }));
   set("inquiry",([
   "进宫":"你问海公公就是.\n",
   "太监":"你问海公公就是.\n",
   ]));
 setup();
 add_money("silver",1);
 }

 