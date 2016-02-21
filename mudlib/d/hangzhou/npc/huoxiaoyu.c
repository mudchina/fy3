inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/霍小玉"; }
void create()
{
#include <kzznpc.h>
	 set("vendor_goods",([
	  "fish":__DIR__"obj/song_fish",
"zongzi":"/obj/std/food/zongzi",
"baozi":"/obj/std/food/baozi",
"hulu":"/obj/std/food/hulu",
	  ]));

 set("area_name","杭州楼外楼");
 set("area_file","/d/hangzhou/louwai.c");
         setup();
}
void init()
{ object ob;
   ::init();
   if (interactive(ob=this_player())&&(!is_fighting()))
         {
                 remove_call_out("greeting");
                 call_out("greeting",1,ob);
         }
add_action("do_vendor_list","list");
}
void greeting(object ob)
{  
      if(!ob||environment(ob)!=environment()) return;
    command("say 这位客人,本处的[宋嫂鱼]乃是杭州一绝,客官来一条尝尝?");
       return;
}
