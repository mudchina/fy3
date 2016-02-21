// yangzhou 's 小公鸡

inherit NPC;

void create()
{
	set_name("小公鸡", ({ "xiaogongji","gongji","ji" }) );
	set("race", "野兽");
	set("age", 3);
	set("long", "一只小公鸡。\n");
        set("mingwang",-1);
	
	set("str", 32);
	set("con", 36);

	set("limbs", ({ "头部", "身体" , "抓子", "尾巴" }) );
	set("verbs", ({ "bite", "claw" }) );

	set("chat_chance", 6);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
		"小公鸡尖叫了几声。\n" }) );
		
	set_temp("apply/attack", 30);
	set_temp("apply/armor", 40);

	setup();
}

