//music yangzhou' 门徒

inherit NPC;

void create()
{
	set_name("门徒", ({ "mentu", "tu" }) );
	set("gender", "男性" );
        set("title", "板桥先生的");
	set("age", 22);
	set("int", 40);
        set("per", 30);
	set("long",
		"板桥先生的门徒。\n");
        set("mingwang",1);
	set("attitude", "peaceful");
        set("combat_exp",1000);
	set_skill("literate", 20);
	setup();
}

