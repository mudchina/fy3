inherit NPC;
void create()
{
    set_name("钟无离",({"zhong wuli","zhong"}));
	set("shen_type",-1);
    set("gender","男性");
    set("title","[咽喉穿洞]");
    set("combat_exp",5000);
    set("age",36);
    set("str",25);
    set("long","一洞神魔手下二将之一.\n");
    set_skill("parry",20);
    set_skill("dodge",20);
    set_skill("unarmed",20);
    set_skill("force",25);
    set_skill("blade",40);
    setup();
add_money("silver",2);
carry_object(__DIR__"obj/jingangwu")->wield();
}
