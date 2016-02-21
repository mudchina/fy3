inherit NPC;

void create()
{
	int skill;

	set_name("伊斯兰教徒", ({ "jiaotu", "man"}) );
	set("gender", "男性" );
	set("age", 20+random(30));
	set("long", "身着长袍的伊斯兰教徒,虔诚地信仰阿拉。\n");
	set("combat_exp",150000+random(150000));
       set_skill("parry",60+random(40));
	set_skill("dodge", 60+random(40));
	set_skill("unarmed", 60+random(40));
       set_skill("blade",60+random(40));
	setup();
	carry_object("/d/quanzhou/obj/npao")->wear();
       carry_object("/d/quanzhou/obj/wandao")->wield();
	add_money("silver",20+random(20));
}
