//music yangzhou' 商人

inherit NPC;

void create()
{
	set_name("奸商",({"jian shang","jianshang","shang"}));
	set("gender", "男性" );
	set("age", 39);
	set("int", 28);
        set("combat_exp",300);
	set("long",
		"奸商。\n");
        set("mingwang",-1);
	set("attitude", "peaceful");
	set_skill("literate", 0);
        set_skill("unarmed",8);
        set_skill("dodge",10);
        set_skill("parry",10);
	setup();
}

