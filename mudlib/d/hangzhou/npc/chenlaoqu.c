#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/陈老曲"; }
void create()
{
#include <kzznpc.h>

	 set("long","陈老板醉心于酒,对生意反而不那么在意.\n");
	set("area_name","杭州酒坊");
	set("area_file","/d/hangzhou/jiufang.c");
	set("ziyuan","曲酒");
	set("jizhi",45);
	set("kaifa",25);

	 set("vendor_goods",([
	  "jiutan":__DIR__"obj/jiutan",
	  ]));
        setup();
	carry_object("/obj/std/armor/pijia")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
	carry_object("/obj/weapon/blade")->wield();
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}

#include <die.h>
