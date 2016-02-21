inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/沈有财"; }
void create()
{
#include <kzznpc.h>

	set("area_name","扬州听萧园");
	set("area_file","/d/yangzhou/tingxiaoyuan.c");

 set("long","年龄不大，但很有钱势的青年人。\n");
        setup();
carry_object("/obj/cloth")->wear();
add_money("gold",1);
}
void init()
{       
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
add_action("do_vendor_list","list");
}

void greeting(object ob)
{
 if( !wizardp(ob) )
    {
        if( !ob || environment(ob) != environment() ) return;
        switch( random(2) ) {
                case 0:
                        say( "沈有财笑道：这位" + RANK_D->query_respect(ob)+ 
"，来壶好酒吧？\n");
                        break;
                case 1:
                        say( "沈有财放下酒壶，说道：这位" + RANK_D->query_respect(ob)
                                + "，请坐请坐。\n");
                        break;
                           }
   }
else{
 say("沈有财满脸堆笑道: 是" + 
ob->query("name")+RANK_D->query_respect(ob) + "来啦？尝尝刚到的好酒吧。\n");
say("沈有财递给你一壶好酒。\n");
clone_object("/d/yangzhou/npc/obj/jiuhu")->move(ob);
    }
}

