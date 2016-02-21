inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/ÍõÌú½³"; }
void create()
{
#include <kzznpc.h>

	set("area_name","ÑïÖİ´òÌúÆÌ");
	set("area_file","/d/yangzhou/tiepu.c");

        set("vendor_goods", ([
                     "³¤½£":     __DIR__"obj/changjian",
                     "¶Ì½£":     __DIR__"obj/duanjian",
                     "Ø°Ê×":     __DIR__"obj/bishou",
                     "¸Öµ¶":     __DIR__"obj/gangdao",
                     "·ÉïÚ":     __DIR__"obj/feibiao",
		"tiejia":"/obj/std/armor/tiejia",
		"tongjia":"/obj/std/armor/tongjia",
		"pijia":"/obj/std/armor/pijia",
        ]) );

        setup();
carry_object("/obj/cloth")->wear();
carry_object("/obj/weapon/hammer")->wield();
carry_object("/obj/std/armor/tiekui")->wear();
carry_object("/obj/std/armor/tiejia")->wear();
carry_object("/obj/std/armor/tiexue")->wear();

add_money("silver",30);
}
void init()
{
	::init();
  add_action("do_vendor_list","list");
}
	
