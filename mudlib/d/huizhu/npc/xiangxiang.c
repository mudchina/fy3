inherit NPC;
void create()
{
   set_name("香香公主",({"gong zhu"}));
   set("gender","女性");
   set("long","木卓伦的小女儿,自幼体有异香!\n");
   set("mingwang",20000);
   set("combat_exp",40000);
   set("area_name","回族牧群");
   
set("age",17);
   set("kee",900);
   set("max_kee",900);
set("food",250);
set("water",250);
   set("force",500);
   set("max_force",500);
   set("force_factor",10);

   set_skill("dodge",80);
   set_skill("force",80);
   set_skill("parry",80);
   set_skill("unarmed",80);
   set_skill("whip",80);

   setup();
   add_money("silver",20);
carry_object("/obj/cloth")->wear();
carry_object("/d/obj/weapon/whip/whip")->wield();
}
void init()
{
  object ob,area;
        area=new("/obj/area");
	area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
}