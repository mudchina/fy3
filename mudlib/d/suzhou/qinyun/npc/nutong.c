// music   yangzhou's 店小二

#include <ansi.h>
inherit NPC;
void create()
{
	set_name("女童",({"nu tong","nu","tong"}));
	set("gender","女性");
	set("age",15);
	set("long",
	"天真可爱的小女孩。正冲你微笑。\n");
	set("combat_exp",100);
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
	if(ob->query("gender")!="女性")	return;
	switch( random(2) ) {
		case 0:
	message_vision(CYN"女童对$N微笑道：“这位"+
	RANK_D->query_respect(ob)+"，不要在这儿乱跑哟。”"NOR,ob);
			break;
		case 1:
	message_vision(CYN"女童低声说道：阿朱姐姐装谁象谁，可好玩啦。\n"NOR,ob);
			break;
                           }
}
