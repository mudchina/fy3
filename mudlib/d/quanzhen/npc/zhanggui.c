
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/马大富"; }

void create()
{
#include <kzznpc.h>

	set("area_name","长安镇酒楼");
	set("area_file","/d/quanzhen/jiuluo2.c");

	set("long",
		"这是位和和气气的生意人。\n");
        set_temp("apply/attack", 30);
        set_temp("apply/defense", 40);


	setup();
	carry_object(__DIR__"obj/cloth")->wear();
	add_money("silver",20);
}

