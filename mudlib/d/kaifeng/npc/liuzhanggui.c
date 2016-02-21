inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/ÁõÂé×Ó"; }
void create()
{
#include <kzznpc.h>
	set("area_name","¿ª·âÑÅç÷Ğù");
	set("area_file","/d/kaifeng/ciqi.c");
	set("vendor_goods",([
	"ÌìÄ¿Íë":__DIR__"obj/ciwan",
	"ÂİÎÆõ°":__DIR__"obj/luowenhai",
	"±Ì²¨ğ­":__DIR__"obj/bibohu",
]));
	setup();
	carry_object("/obj/std/armor/pijia")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
 }

