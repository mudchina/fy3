//yahuan
inherit NPC;
void create()
{
	set_name("丫鬟", ({ "yahuan","girl"}));
	set("gender", "女性");
	set("age", 15);
	set("long", "她是县太爷家的丫鬟\n");
	
        set("per" ,25);
	set("str" ,12);
	set("combat_exp", 1200);
//	set("mingwang", -1);
	set("attitude", "peaceful");
	
        set("chat_chance", 8);
        set("chat_msg", ({
                "在有钱人家做，看似好可实际。。。。。\n",
                "那边的衣服还没洗呢。\n",
                "将来老爷能帮我找个好的人家我也就知足了。\n",

}));
	set_skill("unarmed", 10);
	set_skill("dodge", 30);
//	set_temp("apply/attack", 5);
	set_temp("apply/defense",10);
	setup();
	carry_object("/obj/cloth")->wear();
        add_money("coin",100); 
}
