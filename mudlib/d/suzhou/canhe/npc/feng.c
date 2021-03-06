// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("风波恶",({"feng boe","feng","boe"}));
	set("gender", "男性" );
	set("age",35);
	set("str",30);
	set("mingwang",1);
	set("cor",30);
	set("cps",30);
	set("int",30);
	set("con",30);
	set("long",
		"慕容四大家臣之末，爱斗如命。\n"
	);
	set("combat_exp",400000);
	create_family("姑苏慕容",3,"家臣");
	set("attitude", "heroism");
	set("chat_chance_combat", 15);
    set("chat_msg_combat", ({
		"风波恶好象突然想起什么，赶忙把椅子扶了扶正。\n",
            (: perform_action,"unarmed.canhezhi" :),
        (: perform_action,"unarmed.tanyunshou" :),
    }) );
	set_skill("unarmed",50);
	set_skill("parry",50);
	set_skill("force",50);
	set_skill("dodge",50);
	set_skill("murongquanfa",50);
	set_skill("murongxinfa",50);
	set_skill("murongshenfa",50);
	set_skill("douzhuanxingyi",80);
    map_skill("unarmed","murongquanfa");
    map_skill("dodge","murongshenfa");
    map_skill("force","murongxinfa");
	map_skill("parry","douzhuanxingyi");
            set("max_force", 1500);
        set("force", 1500);
	set("force_factor",50);
	setup();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	object ob;
	::init();
	        if( interactive(ob = this_player()) && !is_fighting() ) {
	call_out("greeting",1,ob);
	}
}
void greeting(object me)
{
	mapping my;
	my=me->query_entire_dbase();
    if(!me||environment(me)!=environment()) return ;
	if (this_object()->is_killing(my["id"])) return;
	if (me->query("gender")=="女性")	{
		message_vision("风波恶对$N笑道：我不根女流之辈动手。\n",me);
		return ;
						}
	message_vision("风波恶对着$N大喝一声：来的正好！我正手痒的紧。\n",me);
	fight_ob(me);
	me->fight_ob(this_object());
	return ;
}
