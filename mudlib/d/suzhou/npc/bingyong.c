// music   yangzhou's ±øÓÂ

inherit NPC;

void create()
{
	set_name("±øÓÂ", ({ "bingyong", "bing", "yong" }) );
	set("gender", "ÄÐÐÔ" );
	set("age", 20);
	set("long",
		"´ôÈôÄ¾¼¦µÄ±øÓÂ¡£\n");
	set("shen_type", 1);
	set("combat_exp", 1000);
        set("str", 30);
	set("mingwang",1);
        set("dex", 2);
        set("con", 2);
        set("int", 2);
	set("attitude", "peaceful");
	setup();
        carry_object("/obj/cloth")->wear();
        carry_object(__DIR__"obj/gangdao")->wield();
	add_money("coin", 1);
}


