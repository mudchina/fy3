// yudaiyan.c 俞岱岩 

inherit NPC;

void create()
{
set_name("俞岱岩", ({ "yu daiyan", "yu" }));  
set("nickname","武当三侠");
	set("long", 
		"他就是张三丰的三弟子俞岱岩。\n"
		"身穿一件干干净净的灰色道袍。\n"
		"他已年过四十，身材瘦长。恬淡冲和，沉默寡言。\n");
	set("gender", "男性");
	set("age",43);
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 28);
	set("int", 28);
	set("con", 28);
	set("dex", 28);
	
	set("max_kee", 1200);
	set("max_gin", 1200);
	set("force", 1200);
	set("max_force", 1200);
	set("force_factor", 50);
	set("combat_exp", 200000);
	set("score", 60000);

	set_skill("force", 100);
	set_skill("taiji-shengong", 100);
	set_skill("dodge", 100);
	set_skill("tiyunzong", 100);
	set_skill("unarmed", 100);
	set_skill("taiji-quan", 100);
	set_skill("parry", 100);
	set_skill("sword", 100);
	set_skill("taiji-jian", 100);
	set_skill("literate", 50);

	map_skill("force", "taiji-shengong");
	map_skill("dodge", "tiyunzong");
	map_skill("unarmed", "taiji-quan");
	map_skill("parry", "taiji-quan");
	map_skill("sword", "taiji-jian");

	create_family("武当派", 2, "弟子");
	setup();
	carry_object("/obj/weapon/sword")->wield();
	carry_object(__DIR__"obj/greyrobe")->wear();

}


