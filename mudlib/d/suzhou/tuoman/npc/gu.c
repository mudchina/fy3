// guard.c

#include <ansi.h>

inherit NPC;
int do_func();

void create()
{
	set_name("老顾头",({"gu"}));
	set("title","厨师");
	set("gender", "男性" );
	set("age",45);
	set("str",30);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"左眼乌黑，半边脸颊高高肿起。想是吃了几下狠的。\n"+
		"无怪他要在菜肴中吐唾沫，擤鼻涕，聊以泄愤。\n"
	);
	set("combat_exp",5000);
	set("attitude","hero");
	set_skill("parry",20);
	set_skill("dodge",20);
	set_skill("unarmed",20);
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
	switch(random(3))	{
		case 0: say("老顾头骂道：操他伊啦娘...\n"+
			"骂人言语一出口，急忙伸手按住嘴巴，甚是惶恐。\n");
			break;
		case 1: say("老顾头骂道：一批北方蛮子，瞧来都是强盗。\n"+
			"另一批是四川人，个个都穿白袍，也不知是啥路道。\n");
			break;
		case 2: say("老顾头奸笑了几声，紧接着一大把鼻涕唾沫掺入镬中。\n");
			break;
				}
}
