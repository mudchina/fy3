// master.c

inherit NPC;

void create()
{
	set_name("弟子",({"dizi"}));
	set("nickname","金风庄");
        set("gender", "男性" );
	set("age",18);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
        set("int", 24);

	set("max_force",150);
	set("force",150);
        set("force_factor", 3);


        set("long",
                
	"神彩奕奕的青年弟子。\n");


	set("combat_exp",5000);

        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
			 (: perform_action, "sword.canhezhi" :),
			(: perform_action, "force.douzhuan" :)
        }) );

	set_skill("unarmed",20);
	set_skill("parry",20);
	set_skill("dodge",20);
	set_skill("sword",20);
	set_skill("force",20);
	set_skill("murongxinfa",20);
	set_skill("murongjianfa",20);
	set_skill("murongshenfa",20);
	map_skill("dodge","murongshenfa");
	map_skill("sword","murongjianfa");
	map_skill("force","murongxinfa");




        setup();
	carry_object(__DIR__"obj/shan")->wear();
	carry_object(__DIR__"obj/duanjian")->wield();
}
void init()
{
	add_action("do_hit","hit");
}
int do_hit(string name)
{
	object me,npc;
	me=this_player();
	npc=present(name,environment());
	if(npc==this_object()&&me->query("family/family_name")!="姑苏慕容")	{
	message_vision("青年弟子怒道："+me->query("name")+"，即是如此，那就休怪我不客气了！\n",me);
		kill_ob(me);
		me->fight_ob(this_object());
		return 1;
	}
	return 0;
}
int accept_fight(object me)
{
	if(me->query("family/family_name")!="姑苏慕容")
		return notify_fail("青年弟子说道：你我并非同门，还是不要伤了和气为好。\n");
		return 1;
}
