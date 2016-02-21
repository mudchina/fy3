// woodcutter.c

inherit NPC;

void create()
{
	set_name("¶ñÅ«",({"enu","e nu"}));
	set("gender", "ÄĞĞÔ" );
	set("age", 26);
	set("long","¹·ÕÌÈËÊÆµÄÅ«ÆÍ¡£\n");
	set("combat_exp",100000);
	set("str", 30);
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set("mingwang",-1);
	set_temp("apply/damage",20);
	set_skill("unarmed",50);
	set_skill("dodge",50);
	set_skill("parry",50);
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver",10);
}
