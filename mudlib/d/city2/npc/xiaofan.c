// seller.c

inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("С��", ({ "xiao fan", "seller", "fan" }) );
	set("gender", "����" );
	set("age", 32);
	set("long",
		"���Ǹ�С����������������ʵʵ�������������Ƕ��ͱ��ˡ�\n");
	set("shen_type", 1);
	set("combat_exp", 10000);
        set("str", 17);
        set("dex", 20);
        set("con", 17);
        set("int", 22);
	set("attitude", "peaceful");
        set_skill("dodge",20);
        set_skill("unarmed",20);
	set("vendor_goods", ([
		"�Ǻ�«":"/d/city2/obj/tanghulu",
	]) );

	setup();
carry_object("/obj/cloth")->wear();
	add_money("coin", 100);
}

void init()
{
        ::init();
        add_action("do_vendor_list", "list");
}