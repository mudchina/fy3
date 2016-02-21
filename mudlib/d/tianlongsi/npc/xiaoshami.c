// xiaoshami.c
inherit NPC;

void create()
{
	set_name("Сɳ��", ({ "xiao shami","shami"}) );
	set("gender", "����" );
	set("class", "bonze");
	set("age", 15);
	set("shen_type", 1);
	set("str", 20);
	set("int", 20);
	set("con", 20);

	set("kee", 500);
	set("max_kee", 500);
	set("gin", 100);
	set("max_gin", 100);
	set("force", 100);
	set("max_force", 100);
	set("force_factor", 10);
	set("combat_exp", 8000);
	set("score", 1000);

	set_skill("force", 80);
	set_skill("dodge", 80);
	set_skill("parry", 70);
	set_skill("tiannan-step", 80);
	set_skill("kurong-changong", 70);

	map_skill("force", "kurong-changong");
	map_skill("dodge", "tiannan-step");
	map_skill("force", "hunyuan-yiqi");
	map_skill("dodge", "shaolin-shenfa");
	
	setup();
	carry_object("/obj/armor/jiasha")->wear();
}

