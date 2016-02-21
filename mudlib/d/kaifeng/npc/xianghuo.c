#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/清竹道长"; }
void create()
{
#include <kzznpc.h>
	set("area_name","开封延庆观");
	set("area_file","/d/kaifeng/sanqing.c");
	set("ziyuan","香烛");
	set("jizhi",35);
	set("kaifa",30);
	setup();
	carry_object("/obj/armor/dao-cloth")->wear();
	carry_object("/obj/weapon/blade")->wield();
	add_money("silver",50);
}
#include <die.h>