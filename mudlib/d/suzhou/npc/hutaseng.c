// music   yangzhou's 店小二

inherit NPC;

void create()
{
	set_name("护塔僧",({ "seng"}));
	set("gender", "男性" );
	set("age", 20);
	set("long",
		"守护寺塔的武僧，长得甚是结实。\n");
	set("combat_exp",4000);
	set("attitude", "friendly");
	set_skill("unarmed",30);
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set_skill("parry",30);
	set_skill("dodge",30);
	setup();
	carry_object("/obj/cloth")->wear();
}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
		remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}
	add_action("do_jump","jump");
}
int do_jump()
{
	object me;
	me=this_player();
	message_vision("护塔僧对着$N道：寺塔乃清静之处，请不要乱走。\n",me);
	return 1;
}
void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
			say("护塔僧双手合十道：阿迷陀佛。\n");
			break;
		case 1:
		message_vision("护塔僧对着$N道：小僧在此化缘多时，请施主布施些吧。\n",ob);
			break;
                           }
}

int accept_object(object who, object ob)
{
	
	if (ob->query("money_id"))
	{
		message_vision("护塔僧对$N道：多谢这位施主，佛祖会保佑你的。\n",who);


// for if back money to who post in wizroom

		return 1;
	}

	return 0;
}
