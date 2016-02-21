inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/ÕÔÈıÇ®";}
void create()
{
#include <kzznpc.h>
	set("area_name","Ñà¾©»Ø´ºÒ©ÆÌ");
	set("area_file","/d/yanjing/yaopu.c");
     set("vendor_goods",([
     	"ĞÜµ¨":__DIR__"obj/xiongdan",
     	"ÌïÆß":__DIR__"obj/tianqi",
     	"Ã»Ò©":__DIR__"obj/muoyao",
     	"Ñª½ß":__DIR__"obj/xuejie",
    ]));
    setup();
    carry_object("/d/obj/cloth/choupao")->wear();
    add_money("silver",20);    
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
 }

