#include <ansi.h>
inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/王二娘"; }
void create()
{
#include <kzznpc.h>

	set("ziyuan","老酒");
	set("jizhi",40);
	set("kaifa",30);
	set("area_name","成都酿酒屋");
	set("area_file","/d/chengdu/niangjiuwo.c");
        set("long",
		"她看来有50多岁了，但是徐娘半老，风韵尤存。\n据说跟几个老光棍还不清不楚的。\n");
	set("vendor_goods", ([
		"酒袋":__DIR__"obj/jiudai",
		"叫化鸡":__DIR__"obj/jiaohuaji",
	]));
	setup();
	carry_object("/obj/armor/female3-cloth")->wear();
	carry_object("/obj/std/armor/pijia")->wear();
}
void init()
{	
	::init();
        add_action("do_vendor_list", "list");

}

#include <die.h>
