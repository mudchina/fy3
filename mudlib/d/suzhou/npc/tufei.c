// music   yangzhou's 店小二
#include <ansi.h>
inherit NPC;
void create()
{
	set_name("土匪",({"tu fei","tufei"}));
	set("gender", "男性" );
	set("age",25);
	set("long",
		"打家劫舍的黑道人物，一脸的横肉。\n");
	set("combat_exp",8000);
	set("pursuer",1);
	set("home",1);
	set_skill("dodge",30);
	set("mingwang",-1);
	set_temp("apply/attack",20);
	set_temp("apply/defense",20);
	set_temp("apply/damage",10);
	set_skill("blade",30);
	set_skill("parry",30);
	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/blade")->wield();
	add_money("silver",50);
}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
//remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}
}

void greeting(object ob)
{
	object *inv;
	int i,mount;
	if( !ob || environment(ob) != environment() ) return;
	inv=all_inventory(ob);
	if(!sizeof(inv))	{
		message_vision(CYN"土匪冲$N骂道：你这个穷鬼，给老子滚远点！\n"NOR,ob);
	return;
	}
	for(i=0;i<sizeof(inv);i++)	{
if(inv[i]->query("value")>=1000||inv[i]->value()>=1000)	{
			message_vision(CYN"土匪对着$N大喝一声：把"+inv[i]->query("name")+"给大爷我留下！！\n"NOR,ob);
			kill_ob(ob);
	ob->fight_ob(this_object());
			return;
		}
	}
	message_vision(CYN"土匪冲$N骂道：你这个穷鬼，给老子滚远点！\n"NOR,ob);
	return;
}
