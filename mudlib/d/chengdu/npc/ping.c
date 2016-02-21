inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/李得发"; }
void create()
{
#include <kzznpc.h>

	set("long", "他就是医术高超的李得发。可是他性格古怪，不是什么人都医的。\n");
	 set("vendor_goods",([
	  "金创药": "/d/suzhou/npc/obj/jinchuang",
	"养精丹":"/d/suzhou/npc/obj/yangjing",
	"六神丸":"/d/suzhou/npc/obj/liushen",
	  ]));
       set("area_name","成都药铺");
       set("area_file","/d/chengdu/cdyaopu.c");
        setup();
carry_object("/d/obj/cloth/changpao")->wear();
add_money("gold",1);
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}


