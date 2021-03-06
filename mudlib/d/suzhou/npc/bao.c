// master.c

inherit NPC;
inherit F_MASTER;
int do_go();

void create()
{
	set_name("包不同",({"bao butong","bao"}));
	set("nickname","金风庄庄主");
        set("gender", "男性" );
	set("age",40);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
	set("mingwang",1);
        set("int", 24);

        set("max_force", 1500);
        set("force", 1500);
	set_skill("foxuexinde",60);
	set_skill("daoxuexinde",60);
	set("force_factor",10);
        set("inquiry",([
	"参合山庄":	(: do_go :),
	]));

	set("rank_info/respect","金风庄庄主");

        set("long",
                
"一位身着长衫的中年汉子，人虽削瘦但掩盖不住勃勃英气。\n");

	create_family("姑苏慕容",3,"家臣");

	set("combat_exp",500000);
        set("score", 200000);

	set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
		(: perform_action,"unarmed.canhezhi" :),
		(: perform_action,"unarmed.douzhuan" :),
		(: perform_action,"unarmed.tanyunshou" :),
        }) );

	set_skill("unarmed",60);
	set_skill("parry",60);
	set_skill("dodge",60);
	set_skill("force",60);
	set_skill("murongxinfa",80);
	set_skill("murongquanfa",80);
	set_skill("murongshenfa",80);
	set_skill("douzhuanxingyi",60);
	map_skill("dodge","murongshenfa");
	map_skill("unarmed","murongquanfa");
	map_skill("force","murongxinfa");
	map_skill("parry","douzhuanxingyi");
	set_skill("literate",40);
        setup();
	carry_object(__DIR__"obj/shan")->wear();
//          add_money("gold",1);
}

void attempt_apprentice(object ob)
{
        command("say 很好，" + RANK_D->query_respect(ob) + 
"多加努力，他日必定有成。\n");
        command("recruit " + ob->query("id") );
}

void recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
			ob->set("class","xiake");
}
int do_go()
{
	object me=this_player();
	string fam;

	fam=(string)me->query("family/family_name");
	if( fam!="姑苏慕容")	{
		tell_object(me,"包不同道：此乃我姑苏慕容的事，与你何干？\n");
		return 1;
	}
	if ( (int)me->query("combat_exp")<50000)	{
		tell_object(me,"包不同道：还是先把武功学好吧！\n");
		return 1;
	}
	tell_object(me,"包不同点了点头道，把你带到暗道，随后转身离去。\n");
	me->move("/d/suzhou/midao1");
	return 1;
}

 
