inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/Ñ¦Ä½ºº"; }
void create()
{
#include <kzznpc.h>

	 set("vendor_goods", ([
                "Ðå»¨Ð¡Ð¬":__DIR__"obj/shoes",
                "¶·Åî":__DIR__"obj/doupeng",
             "¶ÔñÆ¹Ó×Ó": __DIR__"obj/guazi",
                "Õ­ñÌ°À":__DIR__"obj/kenao",
	"°×É´ÌôÏßÏâ±ßÈ¹":__DIR__"obj/qun",
        ]) );

       set("area_name","´óÀíÑ¦¼Ç³ÉÒÂÆÌ");
       set("area_file","/d/dali/garments.c");
        setup();
carry_object("/d/obj/cloth/choupao")->wear();
add_money("silver",5);
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}



