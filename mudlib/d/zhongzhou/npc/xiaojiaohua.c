// poorman.c

inherit NPC;

void create()
{
        set_name("小叫花", ({ "xiao jiaohua","jiaohua","xiao"}) );
        set("gender", "男性" );
        set("age", 16);
        set("long", "满脸污垢的少年。\n");
        set("combat_exp", 5000+random(5000));
        set("shen_type", 1);
        set_skill("unarmed",20);
        set_skill("xianglong-zhang",10);
        set_skill("dodge",20);
        set_skill("xiaoyaoyou",10);
        set_skill("parry",20);
        map_skill("unarmed","xianglong-zhang");
        map_skill("parry","xianglong-zhang");
        map_skill("dodge","xiaoyaoyou");
        set("max_kee",220);
        setup();
        carry_object("/obj/cloth")->wear();
}

