//music yangzhou' 挑夫

inherit NPC;

void create()
{
	set_name("信女",({"xin nu","xinnu","xin","nu"}));
	set("gender","女性");
	set("age",18);
	set("int", 28);
	set("combat_exp",6000);
	set("long",
	"前来进香的青年女子。\n");

	set("attitude","hero");
	set_skill("unarmed",40);
	set_skill("parry",40);
	set_skill("dodge",40);
	setup();
       carry_object("/obj/cloth")->wear();
	add_money("silver",1);
}

