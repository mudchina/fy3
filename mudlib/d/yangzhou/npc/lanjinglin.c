inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/À¶¾«Áé"; }

void create()
{
#include <kzznpc.h>

	set("area_name","ÑïÖÝÔÓ»õÆÌ");
	set("area_file","/d/yangzhou/zahuopu.c");

        set("vendor_goods",([
    "sword":"/obj/weapon/sword",
    "zhujian":"/d/emei/obj/zhujian",
    "whip":"/obj/weapon/whip",
    "tiejia":"/obj/armor/tiejia",
]));
        setup();
carry_object("/d/obj/cloth/skirt")->wear();
add_money("coin",30);
}
void init()
{
::init();
  add_action("do_vendor_list","list");
}
