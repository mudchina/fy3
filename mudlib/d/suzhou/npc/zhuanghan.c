// woodcutter.c
inherit NPC;

string* weapon=({
	"duanjian",
	"changjian",
	"zhujian",
});
string* armor=({
"hupi",
});
string func();

void create()
{
	set_name("壮汉",({"zhuang han","zhuang","han"}));
	set("mingwang",1);
	set("gender", "男性" );
	set("age",25);
	set("long","正在练武艺的壮年汉子。\n");
	set("combat_exp",100000);
	set("chat_chance",1);
	set("chat_msg", ({
		(: func :),
	}) );
	set_skill("sword",60);
	set_skill("dodge",60);
	set_temp("apply/attack",40);
	set_temp("apply/defense",40);
	setup();
	carry_object(__DIR__"obj/hupi")->wear();
	carry_object(__DIR__"obj/changjian")->wield();
}
string func()
{
	object *inv,thing;
	inv=all_inventory(environment(this_object()));
	if(sizeof(inv)>=4)	{
	tell_room(environment(this_player()),"壮汉舞了舞手中的长剑。\n");
	return "\n";
	}
	switch(random(2))	{
		case 0:	{
		thing=new(__DIR__"obj/"+weapon[random(sizeof(weapon))]+".c");
			thing->move(environment(this_object()));
	tell_room(environment(),"壮汉放下手中的"+thing->query("name")+"。喘了口气。\n");
		return "\n";
			}
		case 1:	{
		thing=new(__DIR__"obj/"+armor[random(sizeof(armor))]+".c");
			thing->move(environment(this_object()));
	tell_room(environment(),"壮汉把身上的"+thing->query("name")+"脱了下来，说道：这鬼天气，真是热死人了。\n");
	return "\n";
			}
	}
}

