// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("小翠",({"xiao cui","xiao","cui"}));
	set("title","护花使者");
	set("gender","女性");
	set("age",18);
	set("str",30);
	set("cor", 30);
	set("mingwang",-1);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"曼陀山庄的女仆，外表很是温柔，不知到底如何。\n"
	);
	set("combat_exp",15000);
	set("attitude","friendly");
	set_skill("parry",50);
	set_skill("dodge",50);
	set_skill("blade",50);
	set_temp("apply/dodge",40);
	set_temp("apply/parry",40);
	set_temp("apply/attack",40);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/blade")->wield();
}
int accept_fight(object me)
{
	if(me->query("gender")=="男性")	{
		command("grin");
command("say 我最恨的就是臭男人了，今天就拿你开刀吧。\n");
		kill_ob(me);
		return 1;
					}
	command("smile");
	command("say 即是这样，小妹就领教"+RANK_D->query_respect(me)+
		"的高招。\n");
	return 1;
}
