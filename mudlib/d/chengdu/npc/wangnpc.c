inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/王永康"; }
void create()
{
#include <kzznpc.h>

        set("long","王老板是土生土长的成都人，做了几十年的小买卖。\n");
	set("age",45);
	set("vendor_goods", ([
		"麻布袋":__DIR__"obj/mabudai",
		"huozhezi":__DIR__"obj/huozhezi",
		"背心":__DIR__"obj/beixin",
		"头盔":__DIR__"obj/toukui",
		"fu":"/d/suzhou/npc/obj/tulingfu",
	]));
       set("area_name","成都杂货铺");
       set("area_file","/d/chengdu/cdhuo.c");
        setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",4);
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}



