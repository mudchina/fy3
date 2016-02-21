inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR+"npc/¶ËÄ¾Á¼Ó¹";}
void create()
{
#include <kzznpc.h>	
set("vendor_goods",([
"guijia":__DIR__"obj/guijia"
]));
	set("area_name","¾°µÂÕò²ØÕä¸ó");
	set("area_file","/d/jindezheng/gudong-shop.c");

        setup();
carry_object("/obj/cloth")->wear();        
}
void init()
{
::init();
add_action("do_vendor_list","list");

}
