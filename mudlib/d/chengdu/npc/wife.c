// /u/caac/npc/wife.c      Write by caac.98.6

//#include <npc.h>

inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("小静", ({ "xiao jing","jing" }));
        set("gender", "女性" );
        set("age", 21);

        set("long", "\n她是金星的妻子。斯文大方，温柔美丽。\n"
"金星整天在外面忙，家里全靠小静照顾，她的无微不至、善解人意\n"
"在邻里间是人人称赞的，金星没有她肯定会跳楼的。\n\n"
);

        set_temp("apply/attack", 25);
        set_temp("apply/defense", 25);

        set("combat_exp", 20000);
        set("mingwang", 50);
        set("str", 25);
        set("kar", 20);
        set("con", 18);
        set("int", 15);
        set("attitude", "friendly");

        set("vendor_goods", ([
        	"茶水" :  "/u/caac/obj/tea",
                "点心" :  "/u/caac/obj/dianxin",
	]));

	setup();

        set("chat_msg", ({
"小静朝你一阵微笑......\n",
"小静笑眯眯的看着你。\n",
        }));

	carry_object("/u/caac/obj/jinsijia")->wear();
        carry_object("/u/caac/obj/qun")->wear();

        set("inquiry", ([
            "参茶"     : (: ask_me :),
                        ]));
        setup();
}

int ask_me(object me)
{
 object form;
 
 form = new("/u/caac/obj/tea");
 me = this_player();
 
 message_vision("$N这是参茶，您慢用。\n",me);
 form->move(me);
 return 1;
}

void init()
{       
        object ob;

        ::init();

      if( interactive(ob = this_player()) && !is_fighting() ) 
	{
                remove_call_out("greeting");

                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;

        if ( ob->query("id")=="caac")
          {
             command("ah wangzc");

             message_vision("小静惊喜地说道：小星星回来了！\n",ob);

		        command("jump caac");

			command("kiss caac");

			command("chat 我的小星星回来啦！");

          }

               else

                  {

		switch( random(3) ) 

			{

			case 0:
                 		say( "小静笑咪咪地说道：这位" + RANK_D->query_respect(ob)
                               		+ "，进来歇歇。\n");
                       		break;
               		case 1:
                       		say( "小静抬了抬胳膊，说道：这位" + RANK_D->query_respect(ob)
                               		+ "，请进请进。\n");
                       		break;
               		case 2:
                       		say( "小静说道：这位" + RANK_D->query_respect(ob)
                               		+ "，进来切两盘Duke吧!。\n");
                       		break;
			}

                command("simle"+ob->query("id"));

/*		command("chat 金星，有客人到家里拜访！没事就快回来，不要让客人等！"); */

		  }


}
