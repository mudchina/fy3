// music   yangzhou's 店小二

inherit NPC;
inherit F_VENDOR;
void create()
{
	set_name("小伙计",({"xiao huoji","xiao","huoji"}));
	set("gender", "男性" );
	set("age",15);
	set("long",
		"眉清目秀的小伙计，整天笑嘻嘻的，忙得不亦乐乎。\n");
	set("combat_exp",100);
	set_temp("apply/defense",10);
	set("attitude", "friendly");
	set("rank_info/respect","小兄弟");

	set_temp("apply/defense",10);
	set("vendor_goods", ([
                "包子" : __DIR__"obj/baozi",
		"鸡腿" :__DIR__"obj/jitui",
	]));
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
	add_action("do_vendor_list", "list");
}

void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
		message_vision("小伙计走上前来，对着$N说道：这位"+
		RANK_D->query_respect(ob)+"楼上请。\n",ob);
			break;
		case 1:
		message_vision("小伙计正忙的不可开交，并没有注意到$N进来。\n",ob);
			break;
                           }
}
