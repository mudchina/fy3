// song.c 张翠山

inherit NPC;

void create()
{
set_name("张翠山", ({ "zhang cuishan", "zhang" }));  
set("nickname","武当五侠");
	set("long", 
		"他就是张三丰的五弟子、武当七侠之中的张翠山。\n"
		"身穿一件干干净净的白色道袍。\n");
	set("gender", "男性");
        set("age",31);
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 28);
	set("int", 28);
	set("con", 28);
	set("dex", 28);
	set("max_kee", 1500);
	set("max_gin", 1500);
	set("force", 1500);
	set("max_force", 1500);
	set("force_factor", 50);
	set("combat_exp", 250000);
	set("score", 100000);

	set_skill("force", 100);
	set_skill("taiji-shengong", 120);
	set_skill("dodge", 120);
	set_skill("tiyunzong", 120);
	set_skill("unarmed", 100);
	set_skill("taiji-quan", 100);
	set_skill("parry", 120);
	set_skill("sword", 120);
	set_skill("taiji-jian", 120);
	set_skill("literate", 150);

	map_skill("force", "taiji-shengong");
	map_skill("dodge", "tiyunzong");
	map_skill("unarmed", "taiji-quan");
	map_skill("parry", "taiji-quan");
	map_skill("sword", "taiji-jian");

	create_family("武当派", 2, "弟子");
	setup();

	set("chat_chance_combat", 40);
	set("chat_msg_combat", ({
		(: perform_action, "sword.lian" :),
		(: perform_action, "sword.chan" :),
		(: perform_action, "sword.sui" :),
		(: exert_function, "recover" :),
	}) );

	carry_object("/obj/weapon/sword")->wield();
          carry_object(__DIR__"obj/sword");
	carry_object(__DIR__"obj/whiterobe")->wear();

}


