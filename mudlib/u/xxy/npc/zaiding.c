#include <ansi.h>
inherit NPC;
inherit F_BH;
inherit F_VENDOR;

void create()
{
	set_name("ƒ‡∆–»¯",({"ni pusa","pusa"}));
	set("nickname","æ°ø˙ÃÏª˙");
	set("age",55);
	set_skill("dodge",60);
	set_skill("unarmed",60);
	set_skill("parry",60);
	set_skill("blade",60);
	set("max_force",600);set("force",600);
	set("combat_exp",60000);
         set("vendor_goods", ([
			"∏÷º◊" : "/obj/armor/gangjia" ,
			"Õ≠º◊"  : "/obj/armor/tongjia" ,
                             ]));
        setup();
	carry_object("/obj/weapon/blade")->wield();
	add_money("silver",10);
	carry_object("/obj/cloth.c")->wear();
}
	
void init()
{
        object ob;

        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
        add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
	string banghui;
	mapping data;
	if( !ob || environment(ob) != environment() ) return;
	data=get_file_data("/data/other/dipan");
	set("banghui",data["oldsix"]);
	if(! banghui=query("banghui"))	{
		command("say ¿œ¡˘æ”ª∂”≠∏Ûœ¬£°\n");
	}
	else if(ob->query("banghui")!=banghui)	{
		command("say ª∂”≠π‚¡Ÿ"+banghui+"¿œ¡˘æ”£°\n");
	}
	else	{
		command("say ’‚Œª"+RANK_D->query_respect(ob)+
		"£¨∞Ô÷–“ª«–ø…∫√£ø\n");
	}
}


