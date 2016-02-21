inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/ÕÅÌúµ°"; }
void create()
{
#include <kzznpc.h>

	set("area_name","°×ÍÕÉ½´òÌúÆÌ");
	set("area_file","/d/baituo/datiepu.c");
	set("vendor_goods", ([
               "gangzhang":__DIR__"obj/gangzhang",
               "dadao":__DIR__"obj/dadao",
               "shebian":__DIR__"obj/shebian",
		  "tiejia":"/obj/std/armor/tiejia",
		  "tiegun":"/obj/std/weapon/tiegun",
		  "tiefu":"/obj/std/weapon/tiefu",
	]) );
	setup();
	carry_object("/obj/std/armor/pikui")->wear();
	carry_object("/obj/std/armor/tongjia")->wear();
	carry_object("/obj/std/armor/pishoutao")->wear();
	carry_object("/obj/std/armor/pixue")->wear();
	carry_object("/obj/std/weapon/tiechui")->wield();
}
void init()
{	
::init();
        add_action("do_vendor_list", "list");

}
