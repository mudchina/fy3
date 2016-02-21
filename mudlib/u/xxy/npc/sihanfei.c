//sihanfei 思汉飞 16/6/98

inherit NPC;
inherit F_VENDOR;

int herefight();

void create()
{
	set_name("思汉飞", ({ "si","wangye" }) );
    set("title","蒙古三王爷");
	set("nickname","南征北战");
	set("gender", "男性" );
	set("age", 36);
	set("long",
		"蒙古三王爷,智谋无双,仰慕汉室文化,有一统天下之野心。\n"
		"没事最好少惹他。\n");
	set("chat_chance", 5);
	set("chat_msg", ({
		"思汉飞焦急地踱着步,不时倾听外面的报更声。\n",
		"思汉飞自语道:这惊雁宫.........。\n",
		"思汉飞警觉地看了你一眼。\n",
	}));
	set("combat_exp", 300000);
        set("str", 42);
        set("dex", 34);
        set("con", 32);
        set("int", 29);
	set("attitude", "peaceful");
        set("max_force", 900);
        set("force", 900);
        set("force_factor", 5);
        set("score", 5000);

		set_skill("force", 120);
		set_skill("parry", 120);
		set_skill("dodge", 120);
		set_skill("sword", 120);

      	set_skill("luoying-sword",120);
      	set_skill("literate",120);
       map_skill("sword","luoying-sword");
       map_skill("parry","luoying-sword");
		set("inquiry", ([
			"惊雁宫" : "这是一个神秘的地方,以我之博学,亦难解其中之密。。",
			"传鹰" : "我现在最担心的就是他。。",
			"战神图录" : (: herefight() :),
		]) );	
		
		setup();
        carry_object("/obj/cloth")->wear();
        carry_object("/obj/weapon/sword")->wield();
		add_money("gold", 5);
}
int herefight()
{
  object me,ob;

  me=this_player();
  if ( me->query("mingwang")>10000 ){
    command("say 想找战神图录,先过了我这一关。。\n");  
	kill_ob(me);
	return 1;
	}
    command("say 念你年纪青青,我有好生之德,饶你一命,快给我滚。。\n");
  return 1;
}

