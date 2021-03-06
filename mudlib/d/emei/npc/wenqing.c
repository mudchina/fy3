// wenqing.c 文清小师太

inherit NPC;
inherit F_MASTER;
void create()
{
        set_name("文清小师太", ({ "wenqing","wenqing xiaoshitai","xiaoshitai"}));
        set("long",
                "她是峨嵋派的第五代弟子。\n");
        set("gender", "女性");
        set("age", 15);
        set("attitude", "peaceful");
        set("class", "bonze");
        set("mingwang", 100);

        set("str", 20);
        set("int", 20);
        set("con", 22);
        set("per", 30);

        set("max_kee", 150);
        set("max_gin", 100);
        set("force", 150);
        set("max_force", 150);

        set("combat_exp", 2000);
        set("score", 1000);

        set_skill("force", 30);
        set_skill("dodge", 20);
        set_skill("unarmed", 20);
        set_skill("parry", 20);
        set_temp("apply/attack", 15);
        set_temp("apply/defense", 15);
        set_temp("apply/damage", 5);
        
        set("chat_chance",3);
        set("chat_msg",({
     "文清道:听说师祖把镇派的依天剑传给周师叔了.\n",
     "文清道:师祖常说周师叔天姿聪慧,是练武的奇才.\n",
     "文清道:后洞那个瀑布我老跳不上去,看来轻功还不行.\n",
    }));

        create_family("峨嵋派", 5, "弟子");

        setup();
        carry_object("/obj/weapon/sword")->wield();
        carry_object("/obj/armor/ni-cloth.c")->wear();
        carry_object("/obj/armor/ni-xie")->wear();
}
void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
               remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}
void greeting(object ob)
{
     if( !ob || environment(ob) != environment() ) return;
     command( "say 你是怎么进来的,我以前没见过你。\n");
}
