// Npc: /chengdu/npc/zike.c
// Date: oooc 1998/06/26

inherit NPC;


void create()
{
        set_name("知客僧", ({
		"zhike seng",
                "zike",
                "seng",
	}));
	set("long",
                "这是昭觉寺的知客和尚，年纪虽然不大，但脸上已有岁月的刻痕。\n"
	);


	set("gender", "男性");
	set("attitude", "peaceful");
	set("class", "bonze");

        set("age", 30);
	set("shen_type", 1);
        set("str", 22);
        set("int", 24);
        set("con", 26);
        set("dex", 21);
        set("max_kee", 300);
        set("max_gin", 300);
        set("force", 300);
        set("max_force", 300);
        set("combat_exp", 6000);
        set("score", 100);

        set_skill("force", 30);
        set_skill("dodge", 30);
        set_skill("unarmed", 30);
        set_skill("parry", 30);

	setup();

}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
		remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}
}

void greeting(object ob)
{
	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
            say( "知客僧双手合什说道：这位施主，你来进香?\n");
			break;
		case 1:
            say( "知客僧摸了摸自己的光头，说道：这位" + RANK_D->query_respect(ob)
				+ "，请进请进。\n");
			break;
	}
}

