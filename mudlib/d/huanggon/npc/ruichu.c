inherit NPC;
void create()
{
   set_name("蕊初",({"rui chu"}));
   set("age","女性");
   set("nickname","小宫女");
   set("age",15);
   set("combat_exp",200);
   
   set_skill("unarmed",5);
   set("chat_chance",4);
   set("chat_msg",({
   "蕊初道:那天海公公深夜到慈宁宫来,我可没看见.\n",
   "蕊初道:以前小桂子常到这来玩.\n",
   }));
   setup();
   carry_object("/obj/armor/female5-cloth.c")->wear();
}