inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/张木匠"; }
void create()
{
#include <kzznpc.h>

set("area_name","成都木匠铺");
set("area_file","/d/chengdu/mujiangpu.c");
set("long","他是个手艺高超的木匠，据说他在为少林做事。\n");
set("inquiry", ([
                "name": "小人姓张，在成都也算一个好手艺人。",
                "木人": "说到木人嘛，那可是大半生研究的成果哦。",
                "陈麻婆": "她....我暗恋了她大半辈子，但是.......",
           ]));
set("vendor_goods", ([
         "木剑":"/d/obj/weapon/sword/mujian",
       ]));
	set("age",35);
setup();
}
void init()
{
::init();
add_action("do_vendor_list","list");
}
