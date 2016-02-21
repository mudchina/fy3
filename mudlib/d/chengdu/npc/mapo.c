#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/陈麻婆"; }
void create()
{
#include <kzznpc.h>

	set("area_name","成都麻婆豆腐店");
	set("area_file","/d/chengdu/chenmapo.c");
	set("ziyuan","豆腐");
	set("jizhi",10);
	set("kaifa",70);

	 set("vendor_goods",([
	  "麻婆豆腐":__DIR__"obj/doufu",
	  ]));
set("inquiry", ([
"麻婆豆腐" : "这是我们成都的特产，安逸得很哦。\n",
]));
        setup();
	carry_object("/d/obj/cloth/skirt")->wear();
	add_money("coin",40);
}
void init()
{
        object ob;
        
        ::init();
        if (interactive(ob = this_player()) && !is_fighting()) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
        if (!ob || environment(ob) != environment())
                return;
        switch(random(2)) {
        case 0 :
                say("陈麻婆笑咪咪地说道：这位" + RANK_D->query_respect(ob) +
                        "，快请进。\n");
                break;
        case 1 :
                say("陈麻婆说道：哟！这位" + RANK_D->query_respect(ob) + 
                        "您来了啊！本店的麻婆豆腐硬是安逸得很！\n");
                break;
        }
}


#include <die.h>


