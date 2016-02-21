inherit NPC;

void create()
{
        set_name("¼Ò¶¡", ({ "jia ding", "jia" }));
        set("gender", "ÄĞĞÔ");
        set("age", 35);
        set("long", "¹éÔÆ×¯¼Ò¶¡¡£\n");
        set("combat_exp", 40000);
        set_skill("dodge", 50);
        set_skill("unarmed", 50);
        set_temp("apply/attack",  50);
        set_temp("apply/defense", 50);
        set("shen_type", 1);
        setup();

        add_money("silver",3);
        carry_object("/d/guiyun/obj/cloth")->wear();
}




