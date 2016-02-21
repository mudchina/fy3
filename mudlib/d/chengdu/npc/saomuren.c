// bye enter

inherit NPC;


void create()
{
        set_name("扫墓人", ({
                "sao muren",
                "sao",
        }));
        set("long",
                "这是个眼带忧郁的扫墓人，他不停地在那里唉声叹气，不知道搞什么鬼。\n"
        );


        set("gender", "男性");
        set("attitude", "peaceful");
        set("class", "bonze");

        set("age", 44);
        set("shen_type", 1);
        set("str", 20);
        set("int", 20);
        set("con", 20);
        set("dex", 20);
        set("max_kee", 400);
        set("max_gin", 200);
        set("force", 100);
        set("max_force", 100);
        set("force_factor", 10);
        set("combat_exp", 2000);
        set("score", 100);

        set_skill("force", 12);
        set_skill("dodge", 12);
        set_skill("unarmed", 12);
        set_skill("parry", 12);



        setup();
carry_object("/obj/cloth")->wear();

}

