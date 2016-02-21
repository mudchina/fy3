inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/刘一小"; }
void create()
{
#include <kzznpc.h>

	 set("vendor_goods", ([
		"鸡腿":__DIR__"obj/jitui",
		"酒袋":__DIR__"obj/jiudai",
		"包子":__DIR__"obj/baozi",
             "肺片":__DIR__"obj/piang",
	]));
       set("area_name","成都银杏酒楼");
       set("area_file","/d/chengdu/jiulou1.c");
        setup();
}
void init()
{	
	object ob; 

	ob = this_player();

	::init();
	if( interactive(ob) && !is_fighting() ) {
			remove_call_out("greeting");
			call_out("greeting", 1, ob);
	}

        add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
			say( "刘一小笑咪咪地说道：这位" + RANK_D->query_respect(ob)
				+ "，欢迎光临银杏酒楼。\n");
			break;
		case 1:
			say( "刘一小用脖子上的毛巾抹了抹手，说道：这位" + RANK_D->query_respect(ob)
				+ "，请进请进。\n");
			break;
	}
}


