// nvhai.c

inherit NPC;

void create()
{
        set_name("少女",({ "nv hai" }) );
        set("gender", "女性" );
        set("age", 16);
        set("long", "她是一个身着白衣的少女，长发飘飘，身态迷人。\n");
        set_temp("apply/defense", 5);
        set("combat_exp", 20000);
        set("shen_type", 1);
        set("per", 29);
        set("str", 24);
        set("dex", 25);
        set("con", 16);
        set("int", 15);
        set("attitude", "friendly");
        setup();
          carry_object(__DIR__"obj/qcloth")->wear();
}
