// woodcutter.c

inherit NPC;

void create()
{
	set_name("雇佣打手",({"dashou"}));
	set("gender", "男性" );
	set("age", 26);
	set("long","大春楼雇佣的地痞，以维护楼内治安。\n");
	set("combat_exp",5000);
	set("str", 30);
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set("mingwang",-1);
	set_temp("apply/damage",20);
	set_skill("unarmed",30);
	set_skill("dodge",40);
	setup();
	carry_object("/obj/cloth")->wear();
}
