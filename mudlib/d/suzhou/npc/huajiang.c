// guard.c


inherit NPC;

void create()
{
	set_name("花匠",({"hua jiang","hua","jiang"}));
	set("gender", "男性" );
	set("age",40);
	set("str",25);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("mingwang",1);
	set("con",25);
	set("long",
		"苏州府内的花匠，人很麻利，是干活的好手。\n"
	);
	set("combat_exp",1500);
	set("attitude","friendly");
	set_skill("parry",10);
	set_skill("dodge",10);
	set_skill("unarmed",10);
	setup();
	carry_object("/obj/cloth")->wear();
}
