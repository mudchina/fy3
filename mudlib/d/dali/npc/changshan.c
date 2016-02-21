#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/游少东"; }

void create()
{
#include <kzznpc.h>

	set("area_name","大理苍山");
	set("area_file","/d/dali/cangshan.c");
	set("ziyuan","大理石");
	set("jizhi",40);
	set("kaifa",10);
	set("long","饱经磨难的青年汉子，曾在武当学艺。\n");
        setup();
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/blade")->wield();
}

#include <die.h>