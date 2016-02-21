inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("花无邪", ({ "hua wuxie","girl", "dizi" }));
	set("age", 22);
	set("gender", "女性");
	set("attitude", "peaceful");
	set("str", 34);
       set("title","雁荡三剑");
       set("nickname","慈心剑");
set("combat_exp", 1000000);
	set_skill("unarmed", 160);
	set_skill("dodge", 160);
	set_skill("parry", 160);
	set_skill("sword", 160);
	set_skill("force", 160);
	set_skill("luoyan-jianfa", 160);
	set_skill("yuxuan-guizhen", 160);
	set_skill("tianfeng-xuan", 160);
        set("shen_type",1);
	set_skill("tiangang-zhi", 160);
	map_skill("force", "yuxuan-guizhen");
       map_skill("dodge","tianfeng-xuan");
      map_skill("sword","luoyan-jianfa");
       map_skill("parry","tiangang-zhi");
       map_skill("unarmed","tiangang-zhi");
create_family("雁荡派",2,"弟子");
    set("chat_chance", 7);
	set("chat_msg", ({
		"各有所痴,哪也叫无可奈何!\n",
		(:random_move:)
	}));
	setup();
       add_money("silver",60);
	carry_object("obj/weapon/sword")->wield();
	carry_object("/d/obj/cloth/skirt")->wear();
}
void attempt_apprentice(object ob)
 {  if (ob->query("gender")=="女性")   {
      if (ob->query_skill("yuxuan-guizhen",1)>100)  {   
 	 command("say " + RANK_D->query_respect(ob) + 
 "，你既然诚心拜我为师,我就收你作个弟子吧！。\n");
        command("recruit " + ob->query("id") );
        return;
   }
    command("say 你的玉玄归真还不到家,先跟我师妹学吧.\n");
    return;
 }	
 else command("say 我可不像他们几个,你是男的耶.\n");
 return;
}
