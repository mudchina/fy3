// yapu1.c
// 97.7.13 by aug

#include "thd.h"
inherit NPC;

void create()
{
	set_name("带路哑仆", ({ "yapu" }) );
//	set("title", "江南陆家庄家丁");
	set("gender", "男性");
	set("age", 43);
//	set_race("human");
//	set_level(28);
	set("class","taohua");

	set("long","这是个温顺的哑仆。\n");
	set("rank_info", "哑仆");

	set("max_gin", 500);
	set("max_kee", 500);
	set("max_sen", 500);

	set("max_atman", 600);
	set("atman", 600);
	set("max_force", 600);
	set("force", 600);
	set("max_mana", 600);
	set("mana", 600);

	set("str", 30);
	set("cor", 30);
	set("cps", 30);
	set("spi", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 20);
	set("per", 30);

	set("combat_exp", 50000);
	set("score",10000);
	
      set_skill("unarmed",100);
	set_skill("force", 60);
	set_skill("parry", 60);
	set_skill("dodge", 60);
	set_skill("sword", 60);
	
//	gain_score("mortal sin", -600);

	setup();
	add_money("silver", 1);
	carry_object("/obj/cloth")->wear();
}

int accept_fight(object who)
{
	message_vision("哑仆双手比划着什么，不过$N是没看懂。\n",this_player());

	return 0;
}

int accept_kill(object who)
{
	message_vision("哑仆双手比划着什么，脸露凶相，看来要杀$N。\n",this_player());

}

void init()
{
	add_action("do_ask", "ask");
}

int do_ask(string arg)
{
	object me,ob;

	me=this_player();	
	
      if(((arg!="yapu about in")&&(arg!="yapu about 进去"))||(me->query("family/family_name")!="桃花岛"))
	{
		message_vision("哑仆脸上露出迷茫的神色，双手比划着什么，显然不知道$N在说什么。\n",me);		
		return 1;
	}

	ob=present("letter", me);
	if((me->query("family/generation")>2)&&(!objectp(ob)))
	{
		message_vision("哑仆脸上露出迷茫的神色，双手比划着什么，显然不知道$N在说什么。\n",me);		
		return 1;
	}

	if(me->query("family/generation")>2)
		if(ob->query("pl_name")!=me->query("id")) 
		{
			message_vision(
"哑仆看看$N的脸，再看看$N递上的推荐信上的画像，脸上露出迷茫的神色.
双手比划着什么，显然是看出了有什么问题。\n",me);		
			return 1;
		}

      write(
"
哑仆向你点了下头，比划了一下，转身向内走去。你连忙跟了上去。

你跟着哑仆走啊，走啊，不知走过了多少路，转了多少弯。

终于，哑仆停了下来，双手向前一指，就往回走了。

\n");

    me->move(NOWDIR+"in_road1"); 

    return 1;
}


