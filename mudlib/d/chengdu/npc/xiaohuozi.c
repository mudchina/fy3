// xiaohuozi.c 小伙子

inherit NPC;

void create()
{
	set_name("小伙子", ({ "xiaohuozi", "xiao" }));
	set("gender", "男性");
	set("age", 19);
	set("long", "他是一个在酿酒屋打工的年轻人，长的牛高马大，看上去有些力气。\n");
	
	set("combat_exp", 1000);
	set("shen_type", -1);

	set("attitude", "peaceful");
	
	set_skill("unarmed", 20);
	set_skill("dodge", 20);
	set_temp("apply/attack", 10);
	set_temp("apply/defense", 10);

	setup();
carry_object("/obj/cloth")->wear();
	add_money("silver",2);
}
