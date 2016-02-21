// poorman.c

inherit NPC;

void create()
{
        set_name("穷汉", ({ "qong han","han"}) );
        set("gender", "男性" );
        set("age", 33);
        set("long", "一个穷困潦倒的汉子。\n");
        set("attitude", "friendly");
        set("combat_exp", 5000);
        set("shen_type", 1);
        set_skill("unarmed",40);
        set_skill("dodge",40);
        set_skill("parry",40);
        set_temp("apply/attack",20);
        set_temp("apply/defense",15);
        setup();
        set("chat_chance", 15);
        set("chat_msg", ({
        "穷汉可怜吧吧的看着你道：行行好，赏点吧。\n",
        "穷汉不怀好意的缠着你不放！\n",
        }) );
        carry_object("/obj/cloth")->wear();
}

