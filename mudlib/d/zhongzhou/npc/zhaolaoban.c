inherit KZZNPC;
#include <ansi.h>
inherit F_VENDOR;
string query_save_file() { return DATA_DIR + "npc/赵德言"; }
void create()
{
#include <kzznpc.h>
set("area_name","中州杂货铺");
set("area_file","/d/zhongzhou/zahuopu");
set("vendor_goods", ([
	"背心" : __DIR__"obj/beixin" ,
	"长剑"  : __DIR__"obj/changjian" ,
        "鸡腿":"/obj/std/food/jitui",
        "酒壶":"/d/yangzhou/npc/obj/jiuhu",
        "钢刀":"/obj/weapon/blade",
        "长鞭":"/obj/std/weapon/pibian",
        "土灵符":"/d/suzhou/npc/obj/tulingfu",
                             ]));
	setup();
}
void init()
{       
        object ob;

        ::init();
	if(interactive (ob=this_player()) && !is_fighting() )
{
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
 }



void greeting(object ob)
{

         if( !ob || environment(ob) != environment() ) 
		return;
             
         say("赵德言上前道："+ ob->query("name") +
"现在生意难做，本店实行优惠，你要买点什么？\n");
 }
