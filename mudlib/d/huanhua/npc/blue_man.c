inherit NPC;
void create()
{
    set_name("蓝衣大汉",({"dahan","man"}));
        set("shen_type",-1);
    set("gender","男性");
    set("combat_exp",2000);
    set("age",38);
    set("long","身穿蓝衣,气焰嚣张的大汉.\n");
    set_skill("unarmed",10);
    set_skill("blade",10);
    setup();
add_money("coin",30);
carry_object("/obj/cloth")->wear();
carry_object(__DIR__"obj/niuer-dao")->wield();
}
int accept_fight(object me)
{
    command("say 敢跟老子横,看我宰你个小鸟!\n");
    set_leader(me);
    kill_ob(me);
    return 1;
}
