inherit NPC;
void create()
{
   set_name("青衣",({"qing yi"}));
   set("gender","女性");
   set("long","戏剧中的一个脚色!\n");
   set("mingwang",200);
   set("combat_exp",500000);
   
set("age",19);
   set("kee",1000);
   set("max_kee",1000);
set("food",250);
set("water",250);
   set("force",1000);
   set("max_force",1000);
   set("force_factor",50);

   set_skill("dodge",90);
   set_skill("force",90);
   set_skill("parry",90);
   set_skill("unarmed",90);
   set_skill("sword",90);

   setup();
   add_money("silver",20);
carry_object("/obj/cloth")->wear();

}

