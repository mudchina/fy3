// Mr.music  yangzhou' 唐伯虎

inherit NPC;

void create()
{
	set_name("老秀才",({"lao xiucai","lao","xiucai"}));
	set("long","饱读诗书，却屡试不第的老者。\n");
	set("gender", "男性");
	set("age",60);
	set("per",20);

	set_skill("literate",30);

	set("mingwang",1);
	set_skill("unarmed",20);
	set_skill("dodge",20);
	set_skill("parry",20);
	set("combat_exp",600);
	set("shen_type", 1);
	setup();
}

int recognize_apprentice(object ob)
{
	return 1;
}
