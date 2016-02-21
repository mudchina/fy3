// music   yangzhou's µêÐ¡¶þ
#include <localtime.h>
#include <ansi.h>
inherit NPC;
static string *sym_dee = ({ "×Ó","³ó","Òú","Ã®","³½","ËÈ","Îç","Î´","Éê","ÓÏ","Ð
ç","º¥" });

void create()
{
	set_name("¸ü·ò",({"geng fu","fu","geng"}));
	set("gender", "ÄÐÐÔ" );
	set("age",45);
	set("long",
		"Õâ¶ùµÄ´ò¸üÈË¡£\n");
	set("mingwang",1);
	set("combat_exp",2000);
	set_skill("unarmed",20);
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
	string time;
	mixed *local;
	if( !ob || environment(ob) != environment() ) return;
	local=localtime(time()*60);
	time=sym_dee[((local[LT_HOUR]+1)%24)/2]+"Ê±°¡"+chinese_number((local[LT_MIN]+1)%2 * 2 + local[LT_MIN]/30 + 1)+"¿ÌÓ´£¡";
	message_vision(CYN"Ö»ÌýµÃ¸ü·ò´óÉùßººÈ£º"+time+"\n"NOR,ob);

}
