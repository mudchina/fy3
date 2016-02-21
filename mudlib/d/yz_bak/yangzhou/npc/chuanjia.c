// music   yangzhou's 船家

inherit NPC;
void create()
{
	set_name("船家", ({ "chuanjia", "chuan jia", "jia" }) );
	set("gender", "男性" );
	set("age", 44);
	set("long",
		"这是位饱经风雨的船家，看上去强壮精悍。\n");
	set("mingwang", 1);
	set("combat_exp", 5000);
        set("str", 2);
        set("dex", 12);
        set("con", 2);
        set("int", 12);
	set("attitude", "peaceful");
        set("inquiry", ([
                       "chuan" : "不知您想到哪里啊? \n" ,
                       "船" : "不知您想到哪里啊? \n", 
                       ]) );
	setup();
        carry_object("/obj/cloth")->wear();
        carry_object(__DIR__"obj/chuanjiang")->wield();
	add_money("coin", 50);
}




