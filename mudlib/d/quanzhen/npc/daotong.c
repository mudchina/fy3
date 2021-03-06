// daotong.c 道童
// By Lgg,1998.10

inherit NPC;

void create()
{
	set_name("道童", ({"tong", "dao tong"}));
	set("gender", "男性");
	set("age", 14);
	set("long", 
		"这是一位小道童，看来年纪不大，脸上稚气犹存，整天笑嘻嘻\n"
		"的无忧无虑。\n"
);
	set("attitude", "friendly");

	set("str", 20);
	set("int", 20);
	set("con", 20);
	set("dex", 20);

	set("kee", 300);
	set("max_kee", 300);
	set("gin", 200);
	set("max_gin", 200);
	set("force", 300);
	set("max_force", 300);
	set("force_factor", 0);
	
	set("combat_exp", 15000);
	 
	set_skill("force", 50);
	set_skill("xiantian-qigong", 40);    //先天气功
	set_skill("dodge", 50);
	set_skill("jinyan-gong", 50);   //金雁功
	set_skill("parry", 50);
	set_skill("unarmed",50);

	map_skill("force", "xiantian-qigong");
	map_skill("dodge", "jinyan-gong");
	
	setup();
	
	carry_object(__DIR__"obj/grayrobe")->wear();

}

