#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;
string query_save_file() { return DATA_DIR + "npc/京千灵"; }

void create()
{
#include <kzznpc.h>
set("vendor_goods",([
"gongyugan":__DIR__"obj/gongyugan.c",
"jiangbaoniurou":__DIR__"obj/jiangbaoniurou.c",
"jijiaotang":__DIR__"obj/jijiaotang.c",
"qiguoji":__DIR__"obj/qiguoji.c",
"xiaren":__DIR__"obj/xiaren.c",
"zaoliuyupian":__DIR__"obj/zaoliuyupian.c",
"zhenjiangyaorou":__DIR__"obj/zhenjiangyaorou.c",
]));
set("area_name","京都全聚德");
set("area_file","/d/huanggon/quanjude.c");
	setup();
add_money("silver",2);
}
void init()
{
 ::init();
  add_action("do_vendor_list","list");
}