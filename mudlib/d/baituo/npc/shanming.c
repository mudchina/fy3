#include <ansi.h>

inherit KZZNPC;
string query_save_file() { return DATA_DIR + "npc/王老五"; }

void create()
{
#include <kzznpc.h>

	set("area_name","白驼山草莓地");
	set("area_file","/d/baituo/caomeide.c");
	set("ziyuan","草莓");
	set("jizhi",60);
	set("kaifa",15);
	setup();
	carry_object("/obj/std/armor/pijia")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
	carry_object("/obj/std/weapon/muzhang")->wield();
}

#include <die.h>