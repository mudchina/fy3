inherit NPC;
void create()
{
   set_name("»¤ËÂÉ®ÈË",({"seng ren"}));
   set("gender","ÄĞĞÔ");
   set("mingwang",300);
   set("combat_exp",80000);
   
set("age",32);
   set("kee",1000);
   set("max_kee",1000);
set("food",250);
set("water",250);
   set("force",1000);
   set("max_force",1000);
   set("force_factor",20);

   set_skill("dodge",100);
   set_skill("force",100);
   set_skill("parry",100);
   set_skill("unarmed",100);

   setup();
   add_money("silver",2);
carry_object(__DIR__"obj/xuan-cloth")->wear();
}

