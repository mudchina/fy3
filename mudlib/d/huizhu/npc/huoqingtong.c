inherit NPC;
void create()
{
   set_name("»ôÇàÍ©",({"huo qingtong"}));
   set("gender","Å®ĞÔ");
   set("long","Ä¾×¿Â×µÄ´óÅ®¶ù,¿¶¿®ºÀË¬,Å®ÖĞºÀ½Ü!\n");
   set("mingwang",40000);
   set("combat_exp",500000);
   set("title","´äÓğ»ÆĞä");
   set("area_name","»Ø×åÄÁÈº");
   
set("age",21);
   set("kee",1000);
   set("max_kee",1000);
set("food",250);
set("water",250);
   set("force",500);
   set("max_force",500);
   set("force_factor",30);

   set_skill("dodge",100);
   set_skill("force",100);
   set_skill("parry",100);
   set_skill("unarmed",80);
   set_skill("whip",80);
   set_skill("sword",100);

   setup();
   add_money("silver",30);
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/sword")->wield();
}
void init()
{
  object ob,area;
        area=new("/obj/area");
	area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
}