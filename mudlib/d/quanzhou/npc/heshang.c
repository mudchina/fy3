// dizi.c

inherit NPC;

void create()
{
	int skill;

	set_name("胖和尚", ({ "heshang", "seng"}) );
	set("gender", "男性" );
	set("age", 20+random(30));
	set("long", "露出圆滚滚的肚子,一副怡然自得的样子。\n");
	set("combat_exp",4000+random(5000));
       set_skill("parry",20+random(40));
	set_skill("dodge", 20+random(40));
	set_skill("unarmed", 20+random(40));
	setup();
	carry_object("/d/quanzhou/obj/jiasha")->wear();
            add_money("silver",2);
}
