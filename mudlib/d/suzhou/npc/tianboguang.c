// master.c

inherit NPC;
inherit F_MASTER;
int do_go();

void create()
{
	set_name("田伯光",({"tian boguang","tian"}));
	set("nickname","神州第一大淫贼");
        set("gender", "男性" );
	set("age",30);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
	set("mingwang",-10000);
        set("int", 24);

        set("max_force", 2500);
        set("force", 2500);
	set("force_factor",50);
	set("max_kee",2000);

	set("rank_info/rude","淫贼");

        set("long",
                
"他就是神州第一大淫贼，最感兴趣的就是女人了。
\n为人极讲义气，其快刀刀法乃天下一绝。\n");

	create_family("快刀门",12,"传人");

	set("combat_exp",1000000);
	set_skill("unarmed",100);
	set_skill("parry",100);
	set_skill("dodge",100);
	set_skill("force",100);
	set_skill("blade",200);
	set_skill("poyu-quan",100);
	set_skill("shaolin-shenfa",100);
	set_skill("hunyuan-yiqi",100);
	set_skill("kuaidao-daofa",200);
	map_skill("dodge","shaolin-shenfa");
	map_skill("unarmed","poyu-quan");
	map_skill("force","hunyuan-yiqi");
	map_skill("parry","kuaidao-daofa");
	map_skill("blade","kuaidao-daofa");
	setup();
	carry_object("/obj/std/armor/yinjia")->wear();
	carry_object("/obj/weapon/blade")->wield();
	add_money("gold",1);
}

void attempt_apprentice(object ob)
{
        command("say "+RANK_D->query_respect(ob)+"若是找些漂亮娘们，我到是可以帮你升级功夫。");
}

int accept_object(object me,object ob)
{
	object book;

	if( !ob->is_character())	{
		tell_object(me,"田伯光怒道：你是来耍大爷的吗！\n");
		return 0;
	}
	if( userp(ob))	{
		tell_object(me,"田伯光惊道：我可不敢收玩玩家啊。\n");
		return 0;
	}
	if( (string)ob->query("gender")!="女性")	{
		tell_object(me,"田伯光怒道：大爷只对娘们感兴趣！\n");
		return 0;
	}
	if( query("have_girl")>=20)	{
		tell_object(me,"田伯光叹道：这几天的女人真让大爷的身子吃不消了。改天再说吧。\n");
		return 0;
	}
	if( (int)ob->query_per()<20)		{
		tell_object(me,"田伯光淫笑道：这个货色未免太烂了吧。\n");
		return 0;
	}
	if( query_temp("busy"))	{
		tell_object(me,"田伯光奸笑道：别这么急，慢慢来给我。\n");
		return 0;
	}
	set_temp("busy",1);
	call_out("do_reset",5);
	if( ob->query("id")=="yi lin")		{
		tell_object(me,"田伯光惊喜道：啊，原来是仪琳小师太！\n");
		if( sizeof(children(__DIR__"obj/kuaidao_b"))>4)
		tell_object(me,"接着田伯光叹道：你来迟了，快刀刀法图早被分光了。\n");
		else	{
			tell_object(me,"田伯光从怀中掏出本快刀刀法图交给了你。\n");
			book=new(__DIR__"obj/kuaidao_b");
			if( !book->move(me))	{
				tell_object(me,"田伯光啊了声道：你身上东西太多，下次再给你吧。\n");
				destruct(book);
			}
		}
		call_out("do_dest",1,ob);
		return 1;
	}
	tell_object(me,"田伯光淫笑了数声后对你道：说吧，哪门功夫需要我帮你升级？\n");
	me->set_temp("mark/tbg",1);
	call_out("do_dest",1,ob);
	return 1;
}

int recognize_apprentice(object ob)
{
	if( !(int)ob->query_temp("mark/tbg"))
		return notify_fail("田伯光淫笑道：先给我弄几个漂亮的娘们再说吧。\n");
	ob->delete_temp("mark/tbg");
	return 1;
}

void do_reset()
{
	delete_temp("busy");
}

void do_dest(object ob)
{
	if( objectp(ob))
		destruct(ob);
}
