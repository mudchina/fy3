// woodcutter.c

inherit NPC;

void create()
{
	set_name("顽童",({"wan tong","wan","tong"}));
	set("gender", "男性" );
	set("age",15);
	set("long","苏州本地的顽童，去过不少大人们都不知道的地方。\n");
	set("combat_exp",50);
	set("suzhou",1);
	set("str",15);
	set("chat_chance",20);
	set("chat_msg", ({
		"顽童说道：双塔去过吗？那里可有不少好东西。\n",
		"顽童自言自语道：明天再上去看看有没有其他好玩的东西。\n",
		(: random_move :)
	}) );
	setup();
	carry_object("/obj/cloth")->wear();
}
