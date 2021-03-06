#include <ansi.h>

inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/陆羽"; }
void create()
{
#include <kzznpc.h>

        set("long",
                "他成天带着笑容，可是心头却灵醒得很。\n"+
                "作为茶馆的老板，成天和一帮没事干的无聊家伙混在一起。\n"+
                "消息很是灵通。\n");
	set("inquiry", ([
                "温家" : "温家是成都的大户，但是却是外地迁来的，\n"+
                         "听说那家人曾在江湖中大大有名，是为了避仇到成都的。\n",
        ]));
	set("vendor_goods", ([
                "龙湖翠":__DIR__"obj/longhucui",
        ]));
	set("area_name","成都陆羽茶馆");
	set("area_file","/d/chengdu/chaguan.c");
	set("ziyuan","茶叶");
	set("jizhi",50);
	set("kaifa",10);

	setup();
carry_object("/obj/cloth")->wear();
add_money("silver",4);
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
                say("陆羽笑眯眯地说道：这位" + RANK_D->query_respect(ob) +
                        "，快请进来喝杯热茶。\n");
                break;
        case 1 :
                say("陆羽说道：哟！这位" + RANK_D->query_respect(ob) + 
                        "您来了啊！本店有新鲜的茶叶出售。\n");
                break;
        }
}

#include <die.h>