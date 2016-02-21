inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/ÕÅÌú½³";}
void create()
{
#include <kzznpc.h>
	 set("vendor_goods",([
	  "hammer":"/obj/weapon/hammer",
	  "sword":"/obj/weapon/sword",
	  "blade":"/obj/weapon/blade",
	  "whip":"/obj/weapon/whip",
	  "banfu":"/obj/weapon/banfu",
	  "changdao":"/obj/weapon/changdao",
	  "gandao":"/obj/weapon/gangdao",
	 ]));
	 set("area_name","Ñà¾©Ìú½³ÆÌ");
	 set("area_file","/d/yanjing/tiejiang.c");
        setup();
   carry_object("/obj/cloth")->wear();
   carry_object("/obj/weapon/hammer")->wield();
   add_money("silver",5);
}
void init()
{
::init();
 add_action("do_vendor_list","list");
}