//music yangzhou' 车夫

inherit NPC;

void create()
{
	set_name("车夫", ({ "chefu","che fu", "fu" }) );
	set("gender", "男性" );
	set("age", 36);
	set("int", 28);
        set("combat_exp",400);
        set("mingwang",1);
	set("long",
		"身强力壮的汉子。\n");

	set("attitude", "peaceful");
	set_skill("literate", 0);
        set_skill("parry",10);
        set_skill("dodge",10);
        set_skill("unarmed",10);
	setup();
carry_object("/obj/cloth")->wear();
}

