// xian. ���ϰ�

inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("���ϰ�", ({ "xian laoban", "xian" }));
	set("title", "����¥�ϰ�");
	set("shen_type", 1);

	set("str", 20);
	set("gender", "����");
	set("age", 45);
	set("long", "ϴ�ϰ徭Ӫ�洫����������¥���ж��ꡣ\n");
	set("combat_exp", 50000);
        set("kee", 300);
        set("max_kee", 300);
	set("attitude", "friendly");
	set_skill("unarmed", 60);
        set_skill("dodge", 60);
        set_temp("apply/attack", 30);
        set_temp("apply/defense", 30);
	set("vendor_goods", ([
		"����ƴ�":__DIR__"obj/hdjiudai",
		"��Ѽ":__DIR__"obj/kaoya",
	]));

	setup();
        add_money("gold", 1);
carry_object("/obj/cloth")->wear();
}

void init()
{
        add_action("do_vendor_list", "list");
}
