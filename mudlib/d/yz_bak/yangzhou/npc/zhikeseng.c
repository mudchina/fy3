// music   yangzhou's 知客僧

inherit NPC;

void create()
{
	set_name("知客僧",({"zhike seng","zhike","seng"}));
	set("gender", "男性" );
	set("age", 30);
	set("long",
		"这是位专门接受布施的僧人。\n");
	set("mingwang", 1);
	set("combat_exp", 5000);
        set("str", 2);
        set("dex", 2);
        set("con", 2);
        set("int", 2);
	set("attitude", "peaceful");
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 10);
}


