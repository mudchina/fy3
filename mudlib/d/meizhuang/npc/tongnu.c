// woodcutter.c

inherit NPC;

void create()
{
	set_name("童女",({"tongnu","tong nu","kid"}));
	set("gender","女性");
	set("age",8);
	set("long","天真可爱的小丫头。\n");
	set("combat_exp",800);
	setup();
	carry_object("/obj/cloth")->wear();
}
