// TuoBa.c
// pal 1997.05.14

#include "ansi.h"

inherit NPC;

void create()
{
    set_name("拓跋", ({ "tuoba", }));
	set("long",
        "他是一位带发修行的头陀，身穿一件白布长袍。\n"
        "他个子不高，但很结实，看上去颇为纯朴。可是脸上经常浮现出奇怪的笑容，让\n"
        "人有些摸不着头脑。\n"
	);

	set("banghui","明教");
	set("bh_rank","风字门门主");
	set("level",5);

	set("gender", "男性");
	set("attitude", "friendly");
	set("class", "bonze");

	set("age", 22);
	set("shen_type", 1);
	set("str", 20);
	set("int", 20);
	set("con", 20);
	set("dex", 20);
	set("max_kee", 450);
	set("max_gin", 300);
	set("force", 600);
	set("max_force", 600);
	set("force_factor", 50);
	set("combat_exp", 50000);
	set("score", 100);

	set_skill("force", 70);
	set_skill("hunyuan-yiqi", 70);
	set_skill("dodge", 70);
	set_skill("shaolin-shenfa", 70);
	set_skill("unarmed", 68);
	set_skill("nianhua-zhi", 68);
	set_skill("parry", 70);
	set_skill("sword", 80);
	set_skill("damo-jian", 80);
	set_skill("foxuexinde", 70);
	set_skill("literate", 70);

	map_skill("force", "hunyuan-yiqi");
	map_skill("dodge", "shaolin-shenfa");
	map_skill("unarmed", "nianhua-zhi");
	map_skill("parry", "damo-jian");
	map_skill("sword", "damo-jian");



	setup();

        carry_object("/d/mingjiao/obj/baipao")->wear();
	carry_object("/obj/weapon/sword")->wield();

}
