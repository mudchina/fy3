// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("幽草",({"you cao","you","cao"}));
	set("title","小丫环");
	set("gender","女性");
	set("age",16);
	set("str",20);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"曼陀山庄的小丫环，手中拿着一束花草。\n"+
		"正满脸欢喜的望着你。\n"
	);
	set("combat_exp",100);
	set("attitude","peace");
	set_skill("parry",10);
	set_skill("dodge",10);
	set_skill("unarmed",10);
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
}
void greeting(object ob)
{
 	if( !ob || environment(ob) != environment() ) return;
	if(ob->query("gender")=="男性")	{
		message_vision(CYN"幽草对着$N皱眉道：夫人最恨负心男人，"+RANK_D->query_respect(ob)+"还是快走吧！\n"NOR,ob);
		return;
	}
	message_vision(CYN"幽草对着$N微微一笑。\n"+
		"说道：欢迎这位"+RANK_D->query_respect(ob)+
		"前来曼陀山庄坐客。\n"NOR,ob);
}
