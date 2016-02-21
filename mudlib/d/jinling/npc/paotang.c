// music   yangzhou's 店小二

inherit NPC;
inherit F_VENDOR;
#include <ansi.h>

void create()
{
        set_name("跑堂",({"pao tang","pao","tang"}));
        set("gender", "男性" );
        set("age",22);
        set("long",
                "聚星楼的跑堂倌，正冲你点头哈腰的。\n");
        set("combat_exp",150);
        set("attitude", "friendly");
        set("rank_info/respect","小兄弟");
        set("vendor_goods", ([
                "江口醇" :__DIR__"obj/jiuhu",
                "椒盐排骨" :__DIR__"obj/paigu",
                "清蒸螃蟹" :__DIR__"obj/pangxie",
                "五香花生米" :__DIR__"obj/huasheng",
        ]));
        setup();
}

void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
}

void greeting(object ob)
{

        if( !ob || environment(ob) != environment() ) return;
        switch( random(2) ) {
                case 0:
                message_vision("跑堂倌快步上前道：这位"+
                RANK_D->query_respect(ob)+"想点些什么？\n",ob);
                        break;
                case 1:
                message_vision("跑堂倌正看着$N，等着$N点菜。\n",ob);
                        break;
                           }
}
