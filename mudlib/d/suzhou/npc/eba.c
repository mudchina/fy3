// woodcutter.c
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("恶霸",({"eba","e ba"}));
	set("gender","男性");
	set("age",40);
	set("bellicosity",500);
	set("nickname",RED"别惹我烦着呢"NOR);
	set_temp("apply/damage",40);
	set_temp("apply/armor",50);
	set("long","苏州城内的有钱有势的恶人。\n");
	set_skill("unarmed",80);
	set_skill("parry",80);
	set_skill("dodge",80);
	set("combat_exp",300000);
	set("mingwang",-100000);
	set("max_force",5000);
	set("str",40);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",50);
}
void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
	add_action("do_hit","hit");
}
int accept_fight(object me)
{
	message_vision(RED"恶霸冲$N冷笑道：叫你别烦我，居然还敢跟老子动手动脚！\n"NOR,me);
	kill_ob(me);
	me->fight_ob(this_object());
	return 1;
}
int do_hit(string str)
{
	object me,npc;
	if(!str)	return 0;
	me=this_player();
	npc=present(str,environment());
	if(npc==this_object())	{
	message_vision(RED"恶霸怒喝道："+me->query("name")+"！你敢偷袭大爷！！\n"NOR,me);
	kill_ob(me);
	me->fight_ob(this_object());
	return 1;
	}
	return 0;
}
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
	if(ob->query("mingwang")>100000)	{
	command("grin "+ob->query("id"));
	command("say 别自以为在江湖上闯出些名堂就目中无人。大爷我今天教你两招。");
	kill_ob(ob);
	ob->fight_ob(this_object());
	}else
	message_vision(CYN"恶霸把袖子挽了挽，恶狠狠的瞪着你。\n"NOR,ob);
}
