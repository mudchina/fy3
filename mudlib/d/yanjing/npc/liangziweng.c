inherit NPC;
void create()
{
   set_name("梁子翁",({"liang ziweng"}));
   set("gender","男性");
   set("mingwang",-5000);
   set("combat_exp",460000);
   set("title","长白参客");
   
   set("age",64);
   set("kee",880);
   set("max_kee",880);
   set("food",250);
   set("water",250);
   set("force",800);
   set("max_force",800);
   set("force_factor",40);

   set_skill("dodge",90);
   set_skill("force",90);
   set_skill("parry",90);
   set_skill("unarmed",90);
   set_skill("spear",90);
   set_skill("sword",90);
   

   setup();
   add_money("silver",10);
carry_object("/d/obj/cloth/changpao")->wear();
carry_object(__DIR__"obj/yaochu")->wield();
}
