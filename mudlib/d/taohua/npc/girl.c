inherit NPC;
void create()
{
        set_name("渔家小姑娘", ({ "girl_fish","girl"}));
        set("gender", "女性");
        set("age", 13);
        set("long", "她是生活在小岛渔村的渔家小女孩\n");
        
        set("per" ,25);
        set("str" ,12);
        set("combat_exp", 1200);
        set("attitude", "peaceful");
        
       set("chat_chance", 15);
        set("chat_msg", ({
                "小姑娘说道：哎！扬过大哥哥不知道现在怎么样了。。。\n",
                "小姑娘叹气道：我还没有见过龙姐姐呢。\n",
                "小姑娘皱了皱眉头道：但愿，老天爷让他们有情人终成眷属。。哎！\n",

}));
        set_skill("unarmed", 100);
        set_skill("dodge", 200);
        set_temp("apply/defense",10);
        setup();
        carry_object("/obj/cloth")->wear();
        add_money("coin",100); 
}

