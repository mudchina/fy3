// yin.c 殷梨亭

inherit NPC;

void create()
{
	set_name("殷梨亭", ({ "yin litin", "yin" }));
	set("nickname", "武当六侠");
	set("long", 
		"他就是张三丰的六弟子殷梨亭。\n"
		"他今年三十岁，精明能干，嫉恶如仇，性如烈火。\n");
	set("gender", "男性");
	set("age", 30);
	set("attitude", "heroism");
	set("shen_type", 1);
	set("str", 26);
	set("int", 30);
	set("con", 26);
	set("dex", 28);
	
	set("max_kee", 1500);
	set("max_gin", 1200);
	set("force", 1500);
	set("max_force", 1500);
	set("force_factor", 50);
	set("combat_exp", 125000);
	set("score", 60000);

	set_skill("force", 80);
	set_skill("taiji-shengong", 80);
	set_skill("dodge", 80);
	set_skill("tiyunzong", 80);
	set_skill("unarmed", 80);
	set_skill("taiji-quan", 80);
	set_skill("parry", 80);
	set_skill("sword", 100);
	set_skill("taiji-jian", 100);
//	set_skill("taoism", 80);
	set_skill("literate", 80);

	map_skill("force", "taiji-shengong");
	map_skill("dodge", "tiyunzong");
	map_skill("unarmed", "taiji-quan");
	map_skill("parry", "taiji-jian");
	map_skill("sword", "taiji-jian");

	create_family("武当派", 2, "弟子");

	set("chat_chance_combat", 40);
	set("chat_msg_combat", ({
		(: perform_action, "sword.chan" :),
		(: perform_action, "sword.lian" :),
		(: perform_action, "sword.sui" :),
		(: exert_function, "recover" :),
	}) );

	setup();
	carry_object("/obj/weapon/sword")->wield();
	carry_object(__DIR__"obj/whiterobe")->wear();
}
void init()
{
::init();
remove_call_out("greeting");
call_out("greeting", 1, this_player());
}


void greeting(object ob)
{
	mapping fam;
        int i ;
	object me;
	object* obj;
	me = this_object();
	if (interactive(ob) 
	&& !environment(ob)->query("no_fight"))
	{
 	     if (!(fam = ob->query("family")) || fam["family_name"] != "武当派")
		{
                   if (ob->query("mingwang")>-1000)      
			{
			command("say 这里是武当重地，你在这里瞎逛什么？");
			obj = all_inventory(environment(me));
			for(i=0; i<sizeof(obj); i++) 
			{
			if(obj[i]==this_player()) continue;
			if(obj[i]==me) continue;
			if((obj[i]->query("title")=="盗贼")||(obj[i]->query("mingwang")<-1000)) 
			{
				command("say 大胆蟊贼,敢在此胡作非为,看招!!");
				me->kill_ob(obj[i]);
				obj[i]->kill_ob(me);
			}
			}
			}	

	   else{
			command("say 一定要杀了你这江湖败类！");
			me->set_leader(ob);
			remove_call_out("kill_ob");
			call_out("kill_ob", 1, ob); 
		
			}

		}    
	}       

}
