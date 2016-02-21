// woodcutter.c

inherit NPC;

void create()
{
	set_name("游客",({"youke"}));
	set("gender", "男性" );
	set("age",50);
	set("long","一位年长老人。\n");
	set("combat_exp",1000);
	set_temp("apply/defense",10);
	set_temp("apply/attack",5);
	set("str", 30);
	set("chat_chance",5);
	set("chat_msg", ({
		"老游客喃喃道：不知这剑池泉下埋藏了多少宝剑啊。\n",
		"老游客对你说道：今天可真是游玩的好日子呀。\n",
		(: command("climb") :),
	}) );
	setup();
	carry_object("/obj/cloth")->wear();
	add_money("coin",100);
}
