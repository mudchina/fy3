//shinu.c
inherit NPC;
void create()
{
       set_name("慌张的侍女", ({ "shi nu","shi","nu" }) );
	set("gender", "女性" );
	set("age", 20);
	set("long", "神情慌张,似乎做了什么事情,总是向堂厅看去。\n");
	set("shen_type", -1);
	set("combat_exp", 10000);
	set("str", 20);
	set("per", 21);
	set("dex", 22);
	set("con", 20);
	set("int", 21);
	set("attitude", "friendly");
	setup();
	carry_object("/d/heimuya/npc/obj/cloth")->wear();
	carry_object("/d/heimuya/npc/obj/card3")->wear();
	 add_money("silver",10);
}
