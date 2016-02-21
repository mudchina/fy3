// ai-laozhe.c

inherit NPC;
inherit F_MASTER;
#include <ansi.h>
void create()
{
	set_name("������", ({ "ai laozhe", "ai" }));
	set("title", HIG"��ɽ��ʮ��������"NOR);
	set("long", 
"�����ǻ�ɽ�ĳ��ϰ����ߡ�һ���������ϵ�����������η��\n");
	set("gender", "����");
	set("age", 66);
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 30);
	set("int", 40);
	set("con", 30);
	set("dex", 30);
	
	set("kee", 3800);
	set("max_kee", 3800);
	set("gin", 3600);
	set("max_gin", 2000);
	set("force", 2400);
	set("max_force", 2400);
	set("force_factor", 100);

	set("combat_exp", 1250000);
	set("score", 200000);

	set_skill("force", 170);
	set_skill("blade", 180);
	set_skill("sword", 180);
	set_skill("dodge", 180);
	set_skill("parry", 180);
	set_skill("unarmed", 180);
	set_skill("zixia-shengong", 200);
	set_skill("poyu-quan", 160);
	set_skill("fanliangyi-dao", 180);
	set_skill("huashan-sword", 180);
	set_skill("hunyuan-zhang", 160);
        set_skill("feiyan-huixiang",160);
	set_skill("literate", 100);

	map_skill("force", "zixia-shengong");
        map_skill("dodge", "feiyan-huixiang");
        map_skill("parry", "fanliangyi-dao");
	map_skill("blade", "fanliangyi-dao");
	map_skill("sword", "huashan-sword");
	map_skill("unarmed", "hunyuan-zhang");

	create_family("��ɽ��", 12, "����");

	set("chat_chance_combat", 60);
	set("chat_msg_combat", ({
		(: perform_action, "blade.sanshen" :),
		(: exert_function, "recover" :),
	}) );

	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/gangdao")->wield();
}

void attempt_apprentice(object ob)
{
	int student_num;
	string temp;
	string line;

	if ((string)ob->query("family/family_name") != "" &&
	    (string)ob->query("family/family_name") != "��ɽ��")
	{
		command("say " + RANK_D->query_respect(ob) + "��Ȼ������ʦָ�㣬�α������������أ�");
		return;
	}

        if (((int)ob->query_skill("force",1) < 80) || ((int)ob->query_skill("zixia-shengong",1) < 80))
	{
		command("say �ҿ�" + RANK_D->query_respect(ob) + "����ϼ�񹦻�ûѧ���Ұɡ�");
		return;
	}
        if (((int)ob->query_skill("dodge",1) < 80) || ((int)ob->query_skill("feiyan-huixiang",1) < 80))
	{
                command("say �ҿ�" + RANK_D->query_respect(ob) + "�ķ�����軹ûѧ���Ұɡ�");
		return;
	}

        if ((int)ob->query("mingwang") < 50000)
	{
		command("say �һ�ɽ�����������������ɣ��Ե���Ҫ���ϡ�");
		command("say �ڵ��з��棬" + RANK_D->query_respect(ob) +
			"�Ƿ����ò�����");
		return;
	}

	command("say �ðɣ��Ҿ��������ˡ�");
	command("recruit " + ob->query("id"));
	if((string)ob->query("class") != "fighter")
		ob->set("class", "fighter");

}