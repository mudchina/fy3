// duanzc.c 段正淳

#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("段正淳", ({ "duan zhengchun", "duan" }));
	set("title",  "大理镇南王" );
	set("long", "他就是大理国的镇南王，当今皇太弟，是有名的爱情圣手。\n");
	set("gender", "男性");
	set("age", 45);
	set("class", "officer");
	set("attitude", "friendly");
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
        set("per",28);
	set("con", 35);
	
	set("max_kee", 2200);
	set("max_gin", 600);
	set("force", 2000);
	set("max_force", 2000);
	set("force_factor", 100);
	set("combat_exp", 1000000);
	set("score", 300000);

	set_skill("force",200);
	set_skill("dodge",200);
	set_skill("parry",200);
      
	set_skill("sword",200);
	set_skill("staff",200);
	set_skill("kurong-changong",200);
	set_skill("tiannan-step",200);
	set_skill("jinyu-quan",200);
	set_skill("wuluo-zhang",200);
	set_skill("duanjia-sword",200);
	set_skill("unarmed",200);
	set_skill("yiyang-zhi",200);
	set_skill("literate", 100);

	map_skill("force", "kurong-changong");
	map_skill("dodge", "tiannan-step");
	map_skill("unarmed","yiyang-zhi");
	map_skill("parry","yiyang-zhi");
	map_skill("sword", "duanjia-sword");
	map_skill("staff", "duanjia-sword");

	setup();
	carry_object("/obj/cloth")->wear();
	add_money("silver", 50);

	create_family("大理段家",18,"镇南王");
}

void attempt_apprentice(object ob)
{
	if ((int)ob->query_skill("kurong-changong",1) < 80)
	{
		command("say 你的本门内功心法太低了，还是努努力先提高一下吧。");
		return;
	}
	if ((int)ob->query("mingwang")<50000)	{
		command("say 我大理段氏向来行侠仗义，您请回吧！");
		return;
	}
        command("say 很好，既然入我门来就得忠心为主。");
        command("recruit " + ob->query("id"));
	ob->set("title","大理镇南王府武将");
}
