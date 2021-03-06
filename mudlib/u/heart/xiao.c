// xiao.c
#include <ansi.h>;

inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("萧飞雨", ({ "xiao feiyu" }));
        set("long", 
"她就是飞雨阁的主人，清丽俏脸，双眼犹如电漆
顾盼间使人消魂。\n"
"不但不觉十分冷淡。反而却多
出一般少女没有的成熟高雅风韵。姿态之美，比
之绝世无双的西施也不逊色分毫。
。\n");

        set("gender", "女性");
        set("age", 18);
        set("attitude", "peaceful");
set("nickname", MAG"无情不似多情苦"NOR);
set("title", HIW"飞雨情缘府郡主"NOR);
        set("mingwang",1);
        set("str", 20);
        set("int", 35);
        set("per", 100);
        set("con", 30);
        set("dex", 30);
        
        set("kee", 2200);
        set("max_kee", 2200);
        set("gin", 1600);


        set("max_gin", 1600);
        set("force", 2000);
        set("max_force", 2000);
        set("force_factor", 30);

        set("combat_exp", 1000000);
        set("score", 150000);

        set_skill("force", 200);
        set_skill("dodge", 200);
        set_skill("parry", 200);
        set_skill("sword", 200);
        set_skill("zixia-shengong", 200);
        set_skill("huashan-jianfa", 200);
        set_skill("feiyan-huixiang", 200);
        set_skill("huashan-quanfa", 200);
        set_skill("literate", 90);
        set_skill("unarmed", 200);

        map_skill("dodge", "feiyan-huixiang");
        map_skill("force", "zixia-shengong");
        map_skill("parry", "huashan-jianfa");

        map_skill("sword", "huashan-jianfa");
        map_skill("unarmed", "huashan-quanfa");

        

        set("chat_chance_combat", 50);
        set("chat_msg_combat", ({
                (: perform_action, "sword.jianzhang" :),
                (: perform_action, "sword.wushuang" :),
                (: exert_function, "recover" :),
        }) );

        setup();
        carry_object("/obj/cloth")->wear();
        carry_object("/obj/weapon/sword")->wield();
}


