// yangzhou 's 乞丐

inherit NPC;

void create()
{
	set_name("乞丐", ({ "qigai","qi","gai" }) );
	set("age", 3);
	set("long", "一只中年乞丐。\n");
        set("combat_exp",400);
        set("mingwang",-1);	
	set("str", 32);
	set("con", 36);

	set("chat_chance", 6);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
		"乞丐对著你伸了伸手。\n",
		"乞丐在地上打了个滚。\n" }) );
		
	set_temp("apply/attack", 20);
	set_temp("apply/armor", 20);

	setup();
carry_object("/obj/cloth")->wear();
}

int accept_object(object who, object ob)
{
	if( ob->id("baozi") ) {
		message("vision", name() + "给你磕了三响头。\n", environment());
                set("combat_exp",600);
                set("dodge",20);
                set("parry",20);
                set("unarmed",15);
		return 1;
	}

}
