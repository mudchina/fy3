inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("尚天一", ({ "shang tianyi","dizi"}));
	set("gender", "男性");
	set("age", 23);
       set("title","雁荡三剑");
       set("nickname","灵心剑");
       set("food",250);
       set("water",250);
    set("chat_chance", 7);
	set("chat_msg", ({
		"唉,她们说就是在这附近丢失的,怎会找不到!\n",
	}));
	set("combat_exp", 10000);
	set("mingwang", 2000);
       set_skill("unarmed", 60);
	set_skill("sword", 60);
	set_skill("parry", 60);
        set("shen_type",1);
	set_skill("dodge", 60);
       set_skill("force", 60);
       set_skill("luoyan-jianfa",60);
       set_skill("yuxuan-guizhen",60);
       set_skill("tianfeng-xuan",60);
       set_skill("tiangang-zhi",60);
       map_skill("dodge","tianfeng-xuan");
       map_skill("sword","luoyan-jianfa");
       map_skill("unarmed","tiangang-zhi");
       map_skill("parry","tiangang-zhi");
       map_skill("force","yuxuan-guizhen");

   create_family("雁荡派",2,"弟子");
	setup();
	carry_object("obj/weapon/sword")->wield();
	carry_object("/obj/cloth")->wear();
}
void attempt_apprentice(object ob)
 {  
 	 command("say " + RANK_D->query_respect(ob) + 
 "，你既然诚心加入我雁荡一派,我就收你作个弟子吧！。\n");
        command("recruit " + ob->query("id") );
        return;
 }	
