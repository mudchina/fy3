inherit NPC;
void create()
{
   set_name("陈家洛",({"chen jialuo"}));
   set("gender","男性");
   set("long","红花会的大当家,武功出众!\n");
   set("mingwang",120000);
	set("combat_exp",1000000);
   
set("age",25);
   set("kee",1200);
   set("max_kee",1200);
set("food",250);
set("water",250);
   set("force",900);
   set("max_force",900);
   set("force_factor",30);

   set_skill("dodge",180);
   set_skill("force",180);
   set_skill("parry",180);
   set_skill("unarmed",180);
   set_skill("sword",180);

   setup();
   add_money("silver",50);
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/sword")->wield();
}
