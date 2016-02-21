// Mr.music  yangzhou' 唐伯虎

inherit NPC;

void create()
{
	set_name("老方丈",({"lao fangzhang","lao","fangzhang"}));
	set("long","精彩奕奕、鹤发童颜的报恩寺方丈。\n");
	set("gender", "男性");
	set("title","报恩寺住持");
	set("age",60);
	set("per",20);

	set_skill("unarmed",60);
	set_skill("dodge",60);
	set_skill("parry",60);
	set_skill("force",60);
	set("mingwang",1);

	set("max_force",5000);
	set("force",5000);
	set("force_factor",20);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	set_temp("apply/damage",20);
	set("SPSKILLS",1);
	set("combat_exp",200000);
	set("shen_type", 1);
	setup();
}
void init()
{
	::init();
	add_action("do_get","get");
	add_action("do_steal","steal");
}
int do_get(string arg)
{
	object me,obj;
	string from,item;
	me=this_player();
	if(!arg)	return 0;
	if(sscanf(arg, "%s from %s", arg, from)==2)	{
		if(from=="xiang"||from=="gongde xiang")	{
		command("say 这位施主请不要乱动！");
		return 1;
		}
	return 0;
	}
	return 0;
}
int do_steal(string arg)
{
	object me;
	string from;
	me=this_player();
	if(!arg)	return 0;
	if(sscanf(arg,"%s from %s",arg,from)==2)	{
		if(from=="xiang"||from=="gongde xiang")	{
		command("say 佛门清静之地，施主所为未免太过份了吧！");
		return 1;
	}
	return 0;
	}
	return 0;
}
