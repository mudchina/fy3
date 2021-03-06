// jia.c 贾老六 

#include <ansi.h>
inherit NPC;
string do_yaoqing();

void create()
{
	set_name("贾老六", ({ "jia laoliu", "jia" }));
	set("banghui", "天地会");
	set("shen_type", 1);

	set("gender", "男性");
	set("age", 35);
	set("long",
		"\n他是天地会青木堂会众，当年在扬州之时，曾大骂盐枭，\n"+
		"骂他们不敢杀官造反，只会走私漏税，做没胆子的小生意，\n"+
		"结果得罪了青龙帮，遭人追杀，茅十八也因此和青龙帮结仇。\n");
	set("no_get_from", 1);

	set_skill("unarmed", 60);
	set_skill("yunlong-shou",60);
	set_skill("dodge", 60);
	set_skill("yunlong-shenfa",60);
	set_skill("force",60);
	set_skill("yunlong-xinfa",60);
	set_skill("parry",60);

	map_skill("force","yunlong-xinfa");
	map_skill("dodge","yunlong-shenfa");
	map_skill("unarmed","yunlong-shou");
	map_skill("parry","yunlong-shou");

	set_temp("apply/defense", 30);
	set_temp("apply/attack", 30);
	set_temp("apply/damage", 15);

	set("combat_exp", 50000);
	set("max_kee",600);
	set("max_force",500);
	set("force_factor",50);

	set("attitude", "friendly");
        set("inquiry", ([
		"陈近南" :  "\n想见总舵主可不容易啊。\n",
		"加入天地会" :  (: do_yaoqing() :),
             "反清复明" : "去屠宰场和棺材店仔细瞧瞧吧！\n",
       ]) );

	setup();
	carry_object("/obj/cloth")->wear();
}

void init()
{
        object ob;

        ::init();

        if( interactive(ob=this_player()) && !is_fighting())
        {
                remove_call_out("greeting");
                call_out("greeting",1,ob);
        }
}

void greeting(object ob)
{
        string banghui;
        if(!ob || environment(ob)!=environment()) return;
        banghui=(string)ob->query("banghui");
        if(! banghui || banghui!=(string)query("banghui"))
        message_vision("$N对$n点头道：这位"+
	 RANK_D->query_respect(ob)+"是来"+
        YEL"加入天地会"NOR+"的吧？\n",this_object(),ob);
        else
        command("say 忠义堂前兄弟在，城中点将百万兵。");
}

string do_yaoqing()
{
        object ob;
        string banghui;
        ob=this_player();
        banghui=(string)ob->query("banghui");
        if(! banghui)   {
	if((int) ob->query("mingwang")<0)		{
		command("say 哼，你这种武林败类也想入天地会？");
		return;
	}
        if((int)ob->query("have_banghui")<=4)   {
                ob->set_temp("oldsix/target",this_object());
                return "那就快加入天地会吧(jiaru jia)。";
        }
        else    return "象你这种反复无常的人，本会是不要的。";
        }
        else if(banghui !=(string)query("banghui"))     {
                return "哼，你先脱离"+banghui+"再说吧。";
        }
        else    return "呵呵，都是兄弟，何必开这种玩笑。";
}
