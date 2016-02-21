inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/Â³°å"; }
void create()
{
#include <kzznpc.h>

	set("area_name","Ä¾Æ÷ÆÌ");
	set("area_file","/d/yangzhou/muqipu.c");
        set_name("Â³°å", ({"lu ban", "lu"}));
set("long", "ÎÂºÍÉÆÁ¼µÄÀÏÈË¡£\n");
set("vendor_goods", ([
                     "blade": "/d/yangzhou/npc/obj/mudao",
                "sword": "/d/yangzhou/npc/obj/mujian",
                "staff": "/d/yangzhou/npc/obj/muzhang",
        ]) );
        setup();
carry_object("/obj/armor/guardsuit")->wear();
add_money("silver",30);
}
void init()
{
::init();
  add_action("do_vendor_list","list");
}
