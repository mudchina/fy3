// dizi.c

inherit NPC;

void create()
{
	int skill;

	set_name("渔妇", ({ "fisher", "yufu"}) );
	set("gender", "女性" );
	set("age", 20+random(30));
	set("long", "风吹浪打,掩不住她的质朴善良。\n");

	set("combat_exp",10000+random(30000));
       set_skill("parry",20+random(40));
	set_skill("dodge", 20+random(40));
	set_skill("unarmed", 20+random(40));
       set("inquiry", ([
		"出海" : "出东门,一路向东,就是安海港,你可以找船老大。",
		"妈祖" : "妈祖保佑我们避过海上风浪,保佑我们一帆风顺.",
	]) );
	setup();
	carry_object("/obj/cloth")->wear();
            add_money("silver",2);
}
