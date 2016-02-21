// poorman.c

inherit NPC;

void create()
{
        set_name("雇工", ({ "gu gong","gong"}) );
        set("gender", "男性" );
        set("age", 25);
        set("long", "年轻力壮的外地人。\n");
        set("attitude", "friendly");
        set("combat_exp", 8000);
        set("shen_type", 1);
        set_skill("unarmed",45);
        set_skill("dodge",45);
        set_skill("parry",45);
        set_temp("apply/attack",25);
        set_temp("apply/defense",25);
        setup();
        set("chat_chance", 15);
        set("chat_msg", ({
        "雇工抬手擦了擦汗。\n",
        "“嘿哟、嘿哟”雇工喊着号子，吃力的背着箱子！\n",
        "雇工自言自语道：不知黄员外家要这么多箱子干什么。\n",
        }) );
        carry_object("/obj/cloth")->wear();
        add_money("coin",50);
}

