// music   yangzhou's 店小二

inherit NPC;
void create()
{
	set_name("老鸨",({"laobao"}));
	set("gender","女性");
	set("age",40);
	set("long",
		"打扮的很是妖艳的风尘女子，正满脸媚笑的看着你。\n");
	set("combat_exp",2000);
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set_skill("unarmed",20);
	set("mingwang",-1);
	set_skill("dodge",30);
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
	if(ob->query("gender")=="女性")	{
		message_vision("老鸨冲着$N媚笑道：这可不是"+
		RANK_D->query_respect(ob)+"来的地方啊。\n",ob);
		return ;
	}
	switch( random(2) ) {
		case 0:
		message_vision("老鸨媚声对$N道：这位"+
		RANK_D->query_respect(ob)+"可是看中我家哪位姑娘了吧。\n",ob);
			break;
		case 1:
		message_vision("老鸨冲上前来，一把拉住$N的手叫道：姑娘们，快来接客吧！\n",ob);
			break;
                           }
}
int accept_fight(object who)
{
	int i;
	object npc,env,*inv;
	npc=new(__DIR__"dashou");
	env=environment(this_object());
	message_vision("老鸨对着$N奸笑道：你以为老娘这么好欺侮吗？\n"+
	"来人哪！！\n闻声而来的打手立刻将$N包围了起来。\n",who);
	if(sizeof(children(base_name(npc)))<=4 && (int)query("have_ds")<=4)
	{
		add("have_ds",1);
		npc->move(env);
	}
	else	destruct(npc);
	this_object()->kill_ob(who);
	inv=all_inventory(env);
	for(i=0;i<sizeof(inv);i++)	{
		if (inv[i]->query("id")!="dashou")	continue;
		inv[i]->kill_ob(who);
	}
	return 1;
}
