// guard.c

#include <ansi.h>

inherit NPC;
int do_func();

void create()
{
	object ob;
	set_name("司马林",({"sima lin","sima","lin"}));
	set("title","青城派弟子");
	set("gender", "男性" );
	set("age",25);
	set("mingwang",-1);
	set("str",40);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",40);
	set("long",
		"青城派掌门司马卫之子。\n"+
		"前来慕容家替父报仇。\n"
	);
	set("combat_exp",60000);
	set("attitude","hero");
	set_skill("parry",40);
	set_skill("dodge",40);
	set_skill("throwing",40);
	set_temp("apply/parry",50);
	set_temp("apply/dodge",50);
	set_temp("apply/blade",50);
	setup();
	        ob=carry_object(__DIR__"obj/leigonghong.c");
        ob->set_amount(50);
	ob->wield();
	carry_object("/obj/cloth")->wear();
}
void init()
{
        object ob;
	::init();
                if( interactive(ob = this_player()) && !is_fighting() ) {
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
	if(ob->query("family/family_name")!="姑苏慕容") return;
	if(ob->query("combat_exp")>=10000&&ob->query("combat_exp")<20000)	{
		message_vision(RED"司马林杀气腾腾的对$N道：等着让慕容复帮你收尸吧！\n"NOR,ob);
		kill_ob(ob);
		ob->fight_ob(this_object());
	}
}
