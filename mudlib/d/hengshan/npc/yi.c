// yi.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("定逸师太", ({ "dingyi shitai", "shitai", "dingyi" }) );
        set("gender", "女性");
	set("class","nigu");
        set("age", 45);
        set("attitude", "peaceful");
        set("per", 24);
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 2400);
        set("max_force", 2400);
	set("force_factor",60);
        set("max_kee",2000);
        set("max_gin",1200);
        set("combat_exp", 1000000);
        set("shen_type", 1);

	set_skill("unarmed",150);
	set_skill("sword",150);
	set_skill("force",150);
	set_skill("parry",150);
	set_skill("dodge",150);
	set_skill("hengshan-jianfa",150);
	set_skill("lingxu-bufa",150);
	set_skill("lingyuan-xinfa",80);
	map_skill("force","lingyuan-xinfa");
	set_skill("literate",80);
	set_skill("foxuexinde",100);

        map_skill("sword", "hengshan-jianfa");
        map_skill("parry", "hengshan-jianfa");
        map_skill("dodge", "lingxu-bufa");

        create_family("恒山派", 13, "弟子");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object(__DIR__"obj/xuan-cloth")->wear();
}

void attempt_apprentice(object ob)
{
	string family;

	family=(string)ob->query("family/family_name");
	if(! family || family!="恒山派")	{
	command("say 你是怎么上山来的？快快下山去吧，不要在此乱转。");
	}
	else if((int)ob->query("mingwang")<5000)
	command("say 你还要努力提高自己的江湖名望才行啊。");
	else	{
	message_vision(HIC"$N对着$n点了点头道：你要多为本派做出贡献啊。\n"NOR,
	this_object(),ob);
	command("recruit " + ob->query("id"));
	}
}

