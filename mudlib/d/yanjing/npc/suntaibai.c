inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/ËïÌ«°×"; }
void create()
{
#include <kzznpc.h>
	 set("vendor_goods",([
	  "zuitaibai":__DIR__"obj/zuitaibai",
	  "niurou":__DIR__"obj/niurou",
	  "yadan":"/obj/std/food/yadan",
	  "paomo":"/obj/std/food/paomo",
	  "kaoyangtui":"/obj/std/food/kaoyangtui",
	  ]));
        set("area_name","Ì«°×¾ÆÂ¥");
        set("area_file","/d/yanjing/fandian");
        setup();
        carry_object("/d/obj/cloth/choupao")->wear();

}
void init()
{
::init();
 add_action("do_vendor_list","list");
}
