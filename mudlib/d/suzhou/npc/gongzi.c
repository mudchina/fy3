// music   yangzhou's 店小二

inherit NPC;
void create()
{
	set_name("公子哥",({"gongzi ge","gongzi","ge"}));
	set("gender", "男性" );
	set("age",25);
	set("long",
		"眉清目秀的公子哥。整日无所事事，只知吃喝玩乐。\n");
	set("combat_exp",1000);
	set_temp("apply/attack",10);
	set_temp("apply/defense",10);
	set_skill("unarmed",20);
	set("mingwang",-1);
	set_skill("dodge",20);
	set("attitude", "friendly");
	setup();
}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
		remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}
}

void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
			say("公子哥自言自语道：大春楼的小妞可真够味。\n");
			break;
		case 1:
			message_vision("公子哥对着$N奸笑道："+RANK_D->query_respect(ob)+
			"也是来“踏春”的吧。\n",ob);
			break;
                           }
}
