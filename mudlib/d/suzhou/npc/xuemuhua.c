// huoji. 药铺伙计

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/薛慕华"; }

void create()
{
#include <kzznpc.h>

	set("long","当世第一神医，江湖人称薛神医。\n");
	set("area_name","苏州回春堂");
	set("area_file","/d/suzhou/yaopu.c");
	set_temp("apply/defense",30);
	set_temp("apply/attack",30);
	set_temp("apply/damage",15);
	set("attitude", "friendly");
	set("vendor_goods", ([
	"zhengqi":__DIR__"obj/zhengqi",
	"养精丹":__DIR__"obj/yangjing",
	"六神丸":__DIR__"obj/liushen",
	"sanqing":__DIR__"obj/sanqing",
	"jinchuang":__DIR__"obj/jinchuang",
	"nianhua":__DIR__"obj/nianhua",
	"xiaojing":__DIR__"obj/xiaojing",
	"xuqi":__DIR__"obj/xuqi",
	"lingshen":__DIR__"obj/lingshen",
	]));

	setup();
	carry_object("/obj/std/armor/pixue")->wear();
	carry_object("/obj/cloth")->wear();
	add_money("silver",30);
}

void init()
{
	::init();
	add_action("do_vendor_list", "list");
}
