inherit NPC;

void create()
{
        set_name("小伙计", ({"xiaohuoji"}));
        set("age", 18);
        set("gender", "男性");
        set("long",
"一个能干的伙计。\n");
        set("attitude", "peaceful");

        set("combat_exp", 8000);
        set("shen_type", 1);
        set_skill("unarmed", 20);
        set_skill("dodge", 20);
        set_skill("parry", 20);
        setup();
        carry_object("/obj/cloth")->wear();
        add_money("silver",2);
}


