// 书童: /u/caac/npc/shutong.c  Writen by caac.98.6
#include <ansi.h>

inherit NPC;
inherit F_VENDOR; 

int ask_me(object me);

void create()
{
        set_name("书童",({ "shu tong","boy" }) );
        set("nickname","天生书虫");
         set("title","金星的小书童");
         set("gender", "男性" );
        set("age", 14);
        set("long",

"这是金星的小书童，是个喜欢看书的孩子，整天钻在书本里不出来。\n");
        set("combat_exp", 500);
        set("attitude", "friendly");
        set("vendor_goods", ([
                "参茶": "/u/caac/obj/tea",
                "包子": "/obj/example/dumpling",
                "鸡腿": "/obj/example/chicken_leg",
                
        ]) );  
        set("inquiry", ([
            "好书"     : (: ask_me :)
                        ]));
        setup();
}

int ask_me(object me)
{
 object form;
 
 form = new("/d/school/obj/wizbook2");
 me = this_player();
 
 message_vision("这本书也许对$N有用，拿去看看吧！\n",me);
 form->move(me);
 return 1;
}

