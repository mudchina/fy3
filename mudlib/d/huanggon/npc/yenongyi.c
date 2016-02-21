#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;
string query_save_file() { return DATA_DIR + "npc/“∂≈®“¬"; }

void create()
{
#include <kzznpc.h>
set("vendor_goods",([
"∏‡“©":__DIR__"obj/gaoyao.c",
"sanqing":"/d/yangzhou/npc/obj/sanqing",
"jinchuang":"/d/yangzhou/npc/obj/jinchuang",
"nianhua":"/d/yangzhou/npc/obj/nianhua",
"liushen":"/d/yangzhou/npc/obj/liushen",
"yangjing":"/d/yangzhou/npc/obj/yangjing",
]));
set("area_name","æ©≥«ªÿ¥∫Ã√“©∆Ã");
set("area_file","/d/huanggon/yaopu.c");
	setup();
add_money("silver",2);
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
}
