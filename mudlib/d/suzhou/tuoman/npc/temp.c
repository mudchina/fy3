// Mr.music yangzhou's ÇïÏã

inherit NPC;

void create()
{
	set_name("ÇïÏã", ({ "qiuxiang", "xiang" ,"qiu"}));
	set("long", "Ò»´ú²ÅÅ®£¬ÌÆ²®»¢µÄ·òÈË¡£\n");
	set("gender", "Å®ĞÔ");
	set("age", 25);
        set("per", 90);

	set_skill("literate", 50);
        set("title","½­ÄÏµÚÒ»²ÅÅ®");
	set_skill("unarmed", 60);
	set_skill("dodge", 60);
	set_skill("parry", 60);
	set_temp("apply/attack", 80);
	set_temp("apply/defense", 80);
	set_temp("apply/damage", 20);

	set("combat_exp", 100000);
	set("shen_type", 1);
	setup();

	set("chat_chance",1);
	set("chat_msg", ({
		"ÇïÏã³¯ÄãĞ¦ÁËĞ¦£¬Äã¾õµÃµØÇò·Â·ğÍ»È»Í£Ö¹×ª¶¯ÁË¡£\n",
		"ÇïÏãº¬ÇéÂöÂöµÄ¿´ÁËÌÆ²®»¢Ò»ÑÛ¡£\n",
	}) );
}

int recognize_apprentice(object ob)
{
	if (!(int)ob->query_temp("mark/ÌÆ"))
		return 0; 
	ob->add_temp("mark/ÌÆ", -1);
	return 1;
}

int accept_object(object who, object ob)
{
	if (!(int)who->query_temp("mark/ÌÆ"))
		who->set_temp("mark/ÌÆ", 0);
	if (ob->query("money_id") && ob->value() >= 500) {
		message_vision("ÇïÏãĞ¦ÁËĞ¦£¬³¯$NµãµãÍ·¡£\n", who);
		who->add_temp("mark/ÌÆ", ob->value() / 20);
		return 1;
	}
	return 0;
}
