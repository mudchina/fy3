#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/°¢²¼"; }
void create()
{
#include <kzznpc.h>

       set("area_name","ÎÚÃÉ´åÂä");
	set("area_file","/d/dali/wumeng.c");
	set("ziyuan","É½Ñò");
	set("jizhi",40);
	set("kaifa",20);

        setup();
	carry_object(__DIR__"obj/wchangqun")->wear();
	carry_object("/obj/weapon/whip")->wield();
}

#include <die.h>