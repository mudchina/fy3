inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/Ëï²Ã·ì"; }
void create()
{
#include <kzznpc.h>

	set("area_name","ÑïÖÝ²Ã·ìµê");
	set("area_file","/d/yangzhou/caifengdian.c");

 	set("vendor_goods", ([
		"³¤ÉÀ":     __DIR__"obj/changshan",
		"ÁÔ×°":     __DIR__"obj/liezhuang",
		"»¢Æ¤":     __DIR__"obj/hupi",
		"langpi":__DIR__"obj/langpi",
		"goupi":__DIR__"obj/goupi",
		"diaopi":__DIR__"obj/diaopi",
		"duanshan":__DIR__"obj/duanshan",
		"feicuiqun":__DIR__"obj/feicuiqun",
        ]) );

        setup();
carry_object("/obj/cloth")->wear();
add_money("coin",30);
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
}



