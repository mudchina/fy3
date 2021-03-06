// xutianch.c 徐天川

#include <ansi.h>
inherit NPC;
int do_look(string dir);

void create()
{
	set_name("徐天川", ({ "xu tianchuan", "xu", "tianchuan" }));
	set("banghui", "天地会");
	set("bh_rank","青木堂护法");
	set("nickname", "八臂猿猴");
	set("gender", "男性");
	set("long", "\n他是青木堂数一数二的好手，手上功夫十分了得，尤其擅使一套猴拳。\n");
	set("age", 55);

	set("int", 30);
	
	set("kee", 1200);
	set("max_kee", 1200);
	set("gin", 500);
	set("max_gin", 500);
	set("mingwang",500);
	set("max_force",1200);
	set("force",1200);
	set("force_factor",100);

	set("combat_exp", 800000);
	set("attitude", "friendly");

	set_skill("force", 100);
	set_skill("dodge", 100);
	set_skill("parry", 100);
	set_skill("unarmed", 100);
	set_skill("yunlong-xinfa", 100);
	set_skill("yunlong-shenfa", 100);
	set_skill("houquan", 150);
	set_skill("yunlong-shou",100);

	set_temp("apply/attack", 50);
	set_temp("apply/defense", 50);
	set_temp("apply/damage", 35);

	map_skill("force", "yunlong-xinfa");
	map_skill("dodge", "yunlong-shenfa");
	map_skill("unarmed", "houquan");
	map_skill("parry", "houquan");

	set("chat_chance", 3);
	set("chat_msg", ({
	"徐天川想了想，说：有人想要进出皇宫，我得想个法子才好啊。\n",
	"徐天川说道: 江湖威望很重要，威望值高大有好处啊。\n",
        "徐天川突然说：自此传得众兄弟，后来相认团圆时。\n",
        "徐天川突然说：初进洪门结义兄，对天明誓表真心。\n",
	}));

        set("inquiry", ([
		"陈近南" :  "\n想见总舵主可不容易啊。\n",
		"天地会" :  "\n要入我天地会，得找贾老六问问看。\n",
                "去清复明膏" : "去药铺内室里仔细瞧瞧吧！\n",
                "去清复明" : "去药铺内室里仔细瞧瞧吧！\n",
                "反清复明" : "去药铺内室里仔细瞧瞧吧！\n",
	]) );

	setup();
	carry_object("/obj/cloth")->wear();
	add_money("gold", 1);
}

void init()
{
	add_action("do_look","look");
}

int do_look(string dir)
{
	object me=this_player();
	string banghui;

	if(! dir)	return 0;
	if(!living(me))	return 0;
	if(!living(this_object()))	return 0;
	banghui=(string)me->query("banghui");
	if((! banghui || banghui!=query("banghui"))&&dir=="west")	{
		write(query("name")+"一闪身挡在门前道：有什么好看的。\n");
		return 1;
	}
	return 0;
}


void recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"摇头道：非我天地会兄弟不教。\n");
        if(ob->query("score")<1000)
                return notify_fail(query("name")+"道：你要多为天地会出力啊。\n")
;
        return 1;
}
