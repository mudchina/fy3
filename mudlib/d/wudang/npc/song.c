// song.c 宋远桥

inherit NPC;
inherit F_MASTER;

string ask_me();

void create()
{
	set_name("宋远桥", ({ "song yuanqiao", "song" }));
	set("nickname", "武当首侠");
	set("long", 
		"他就是张三丰的大弟子、武当七侠之首的宋远桥。\n"
		"身穿一件干干净净的灰色道袍。\n"
		"他已年过六十，身材瘦长，满脸红光。恬淡冲和，沉默寡言。\n");
	set("gender", "男性");
	set("age", 61);
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 35);
	set("dex", 30);
	
set("max_kee", 1800);
set("max_gin",1800);
set("force",2000);
set("max_force", 2000);
	set("combat_exp", 400000);
set("force_factor", 100);
	set("score", 100000);

	set_skill("force", 130);
	set_skill("taiji-shengong", 120);
	set_skill("dodge", 120);
	set_skill("tiyunzong", 120);
	set_skill("unarmed", 120);
	set_skill("taiji-quan", 120);
	set_skill("parry", 120);
	set_skill("sword", 120);
    set_skill("taiji-jian", 120);
	set_skill("literate", 120);

	map_skill("force", "taiji-shengong");
	map_skill("dodge", "tiyunzong");
	map_skill("unarmed", "taiji-quan");
    map_skill("parry", "taiji-jian");
    map_skill("sword", "taiji-jian");

	create_family("武当派", 2, "弟子");


	set("chat_chance_combat", 40);
	set("chat_msg_combat", ({
		(: perform_action, "unarmed.zhen" :),
		(: exert_function, "recover" :),
	}) );

	setup();
    carry_object("/obj/weapon/sword")->wield();
	carry_object(__DIR__"obj/greyrobe")->wear();
    carry_object(__DIR__"obj/force-book")->wear();

}

void attempt_apprentice(object ob)
{
	if ((int)ob->query("mingwang") < 10000) {
		command("say 我武当乃是堂堂名门正派，对弟子要求极严。");
		command("say 在德行方面，" + RANK_D->query_respect(ob) +
			"是否还做得不够？");
		return;
	}
	command("say 好吧，贫道就收下你了。");
	command("recruit " + ob->query("id"));
	if( (string)ob->query("class") != "daoshi")
		ob->set("class", "daoshi");
}
