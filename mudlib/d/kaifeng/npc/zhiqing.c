#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/智清长老"; }
void create()
{
#include <kzznpc.h>
	set("area_name","开封大相国寺");
	set("area_file","/d/kaifeng/fangzhang.c");
	set("ziyuan","佛像");
	set("jizhi",45);
	set("kaifa",10);
	setup();
	carry_object("/obj/armor/jiasha")->wear();
	carry_object(__DIR__"obj/fozhu")->wear();
}
#include <die.h>