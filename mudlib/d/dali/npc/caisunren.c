inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/阿珂玛"; }
void create()
{
#include <kzznpc.h>

	set("area_name","武定镇青竹林");
	set("area_file","/d/dali/qingzhulin.c");
	set("ziyuan","竹笋");
	set("jizhi",15);
	set("kaifa",50);

	set("long", "一个卢鹿部的青年台夷妇女，背后背了个竹筐，手拿一把砍柴刀，来采竹笋。\n");
        setup();
carry_object(__DIR__"obj/tongqun")->wear();
carry_object(__DIR__"obj/kandao")->wield();
}

// #include <die.h>
