inherit NPC;
void create()
{
 set_name("多隆",({"duolong"}));
 set("age",343);
 set("gender","男性");
 set("nickname","御前侍卫总管");
 set("combat_exp",550000);
 set("force",500);
 set("max_force",500);
 set("force_factor",80);
 set_skill("unarmed",100);
 set_skill("dodge",100);
 set_skill("parry",100);
 set_skill("blade",100);
 set_skill("force",100);
 set_skill("emei-xinfa",100);
 set_skill("anying-fuxiang",100);
 set_skill("wuhu-duanmendao",100);
 set_skill("jinyu-quan",100);
 map_skill("dodge","anying-fuxiang");
 map_skill("unarmed","jinyu-quan");
 map_skill("force","emei-xinfa");
 map_skill("blade","wuhu-duanmendao");
   
 setup();
 carry_object("/obj/std/weapon/gangdao")->wield();
 carry_object("/obj/std/armor/yinjia")->wear();
 }
int accept_fight(object ob)
{
command("say 重责在身,恕难从命.\n");
return 0;
}
  