// yangzhou 's 无赖

inherit NPC;

void create()
{
	set_name("无赖", ({ "wulai","wu","lai" }) );
	set("age", 23);
	set("long", "一个饿昏了的无赖。\n");
        set("combat_exp",100);
        set("mingwang",-1);	
	set("str", 32);
	set("con", 36);

	set("chat_chance", 2);
	set("chat_msg", ({
		(: this_object(), "random_move" :),
		"无赖对著你伸了伸手,要个包子。\n",
		"无赖朝你奸笑了几声。\n" }) );
		
	set_temp("apply/attack", 2);
	set_temp("apply/armor", 2);

	setup();
carry_object("/obj/cloth")->wear();
}

int accept_object(object who, object ob)
{
	if( ob->id("baozi") ) {
		message("vision", "无赖吃完包子,朝你冷笑一声。\n", environment());
                set("combat_exp",1800);
                set("dodge",30);
                set("parry",30);
                set("unarmed",20);
                set("attitude", "aggressive");
		return 1;
	}

}
