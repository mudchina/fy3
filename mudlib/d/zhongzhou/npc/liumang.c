// liumang
inherit NPC;
void create()
{
	set_name("流氓", ({ "liumang","liu mang", "liu" }));
	set("gender", "男性");
	set("age", 19);
	set("long", "他是一个色迷迷的流氓。\n");
	
	set("combat_exp", 1800);
	set("mingwang",-1);
	set("attitude", "peaceful");
	
	set_skill("unarmed", 10);
	set_skill("dodge", 30);
	set_temp("apply/attack", 10);
	set_temp("apply/defense", 30);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",5);
}
