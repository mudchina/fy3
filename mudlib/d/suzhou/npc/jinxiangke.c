//music yangzhou' 挑夫

inherit NPC;

void create()
{
	set_name("进香客",({"jinxiang ke","jinxiang","ke"}));
	set("gender", "男性" );
	set("age", 30);
	set("int", 28);
	set("combat_exp",5000);
	set("long",
	"虔诚进香的中年人。\n");

	set("attitude", "peaceful");
	set_skill("unarmed",30);
	set_skill("parry",30);
	set_skill("dodge",40);
	setup();
       carry_object("/obj/cloth")->wear();
	add_money("silver",5);
}

