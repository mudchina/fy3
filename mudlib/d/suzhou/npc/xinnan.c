//music yangzhou' 挑夫

inherit NPC;

void create()
{
	set_name("信男",({"xin nan","xinnan","xin","nan"}));
	set("gender", "男性" );
	set("age",25);
	set("int", 28);
	set("combat_exp",7000);
	set("long",
	"前来进香的青年男子。\n");

	set("attitude","hero");
	set_skill("unarmed",40);
	set_skill("parry",40);
	set_skill("dodge",40);
	setup();
       carry_object("/obj/cloth")->wear();
	add_money("silver",2);
}

