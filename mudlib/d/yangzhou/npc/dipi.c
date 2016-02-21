// dipi.c

inherit NPC;

void create()
{
        set_name("地痞", ({"dipi","pi"}) );
        set("gender", "男性" );
        set("age", 19);
        set("long", "这是醉醺醺的地痞。\n");

        set_temp("apply/attack", 15);
        set_temp("apply/defense", 15);
        set("combat_exp", 950);
	set("mingwang", -1);
        set("str", 25);
        set("kar", 20);
        set("con", 18);
        set("int", 15);
        set("attitude","heroism");
        setup();
        set("chat_chance", 8);
        set("chat_msg", ({
"地痞朝你一阵奸笑。。。。\n",
"地痞色迷迷的看着你。\n",
        }) );
        carry_object("/obj/cloth")->wear();
         add_money("coin",10);
}

