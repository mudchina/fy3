// YinWuShou.c
// pal 1997.05.11

inherit NPC;

void create()
{
    set_name("殷无寿", ({ "yin wushou", "yin", "wushou", }));
	set("long",
        "他是一位老者，身穿一件白布长袍。\n"
        "他是白眉鹰王殷天正的仆从。整天愁眉苦脸的，一副短命横死相。\n"
	);


	set("banghui","明教");
	set("gender", "男性");
	set("attitude", "friendly");

    set("age", 57);
	set("shen_type", 1);
	set("str", 25);
	set("int", 25);
	set("con", 25);
	set("dex", 25);
	set("max_kee", 1000);
	set("max_gin", 1000);
	set("force", 1000);
	set("max_force", 1000);
	set("force_factor", 100);
	set("combat_exp", 100000);
	set("score", 5000);

	set_skill("force", 85);
	set_skill("hunyuan-yiqi", 85);
	set_skill("dodge", 85);
	set_skill("shaolin-shenfa", 85);
	set_skill("unarmed", 95);
	set_skill("jingang-quan", 95);
	set_skill("parry", 85);
	set_skill("foxuexinde", 85);
	set_skill("literate", 85);

	map_skill("force", "hunyuan-yiqi");
	map_skill("dodge", "shaolin-shenfa");
	map_skill("unarmed", "jingang-quan");
	map_skill("parry", "jingang-quan");


	setup();

    carry_object("/d/mingjiao/obj/baipao")->wear();
}

