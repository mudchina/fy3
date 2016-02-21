// music   yangzhou's 店小二

inherit NPC;
void create()
{
	set_name("马可皮罗",({"makepilo","make pilo","make"}));
	set("gender", "男性" );
	set("age",35);
	set("long",
	"金发碧眼的外国人。\n");
	set("mingwang",1);
	set("nickname","老外");
	set_temp("apply/defense",50);
	set_temp("apply/damage",5);
	set_temp("apply/armor",50);
	set("combat_exp",100000);
	set_skill("unarmed",100);
	set_skill("parry",100);
	set_skill("xiyang-quanshu",100);
	map_skill("parry","xiyang-quanshu");
	set_skill("dodge",150);
	set("max_force",1500);
	set("force",1500);
	set("attitude", "friendly");
	set("force_factor",50);
	map_skill("unarmed","xiyang-quanshu");
	setup();
	carry_object(__DIR__"obj/xifu")->wear();
	add_money("gold",2);
	carry_object(__DIR__"obj/xiangyanke");
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
	switch( random(3))	{
		case 0:
	say("马可皮罗操着京腔说道：好啊您哪儿。\n");
			break;
		case 1:
	say("马可皮罗自言自语也不知在说些什么洋话。\n");
			break;
	case 2:
	say("马可皮罗掏出支香烟悠闲的抽了起来。\n");
		break;
                           }
}
int accept_fight(object me)
{
	command("say 我正想领教领教中国功夫。");
	return 1;
}
