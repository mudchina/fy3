// poorman.c
#include <ansi.h>

inherit NPC;

void create()
{
        set_name(HIY"金蛇镖师"NOR, ({ "jinshe biaoshi","jinshe","biaoshi"}) );
        set("gender", "男性" );
        set("age", 26);
        set("long", "龙门镖局的镖师。\n");
        set("combat_exp", 600000);
        set("shen_type", 1);
	set_skill("unarmed",60);
	set_skill("jingang-quan",60);
	set_skill("dodge",60);
	set_skill("shaolin-shenfa",60);
	set_skill("force",60);
	set_skill("hunyuan-yiqi",60);
	set_skill("parry",60);
	set_skill("sword",60);
	set_skill("damo-jian",60);
	map_skill("unarmed","jingang-quan");
	map_skill("dodge","shaolin-shenfa");
	map_skill("parry","jingang-quan");
	map_skill("force","hunyuan-yiqi");
	map_skill("sword","damo-jian");
	set("max_force",700);
	set("force",700);
	set("force_factor",60);
	set("max_kee",400);

	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/std/armor/tongjia")->wear();
	carry_object("/obj/std/armor/tongxue")->wear();
	carry_object("/obj/std/armor/tongkui")->wear();
	carry_object("/obj/std/armor/tongshoutao")->wear();
	carry_object("/obj/weapon/sword")->wield();
}

void init()
{

	remove_call_out("greeting");
	call_out("greeting", 1);
	add_action("do_unguard","unguard");
}

void greeting()
{
	if( !objectp(query_temp("guarding")))	{
		say(query("name")+"匆忙的回龙门镖局去了。\n");
		destruct(this_object());
	}
}

void do_unguard()
{
	object me=this_player();

	if( (object)query_temp("guarding")==me)	{
		say(query("name")+"道：即是如此，你我后会有期。\n说罢便转身而去。\n");
		command("guard cancel");
		destruct(this_object());
	}
}

void do_reset()
{
	say(query("name")+"道：我的护镖任务已经完成，后会有期。\n说罢转身离去。\n");
	command("guard cancel");
	destruct(this_object());
}
void wait_reset()
{
	call_out("do_reset",1800);
}


