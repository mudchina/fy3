#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/郑和"; }
void create()
{
#include <kzznpc.h>
	set("area_name","泉州市舶司");
	set("area_file","/d/quanzhou/tingtang.c");
	set("ziyuan","波斯布");
	set("kaifa",15);
	set("jizhi",75);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/d/obj/weapon/blade/wandao")->wield();
}
#include <die.h>