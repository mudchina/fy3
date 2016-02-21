// lu.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("Â½°Ø", ({ "lu bai", "bai", "lu" }) );
        set("nickname", "ÏÉº×ÊÖ");
        set("gender", "ÄÐÐÔ");
        set("class", "swordsman");
        set("age", 45);
        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 2000);
        set("max_force", 2000);
        set("force_factor", 30);
        set("max_kee",2000);
        set("max_gin",1200);
        set("combat_exp", 800000);
        set("shen_type", -1);

        set_skill("unarmed", 120);
	set_skill("songyang-zhang",120);
        set_skill("sword", 120);
        set_skill("force", 120);
	set_skill("hanbing-zhenqi",120);
        set_skill("parry", 120);
        set_skill("dodge", 120);
        set_skill("songshan-jianfa", 120);
        set_skill("fuguanglueying", 120);

        map_skill("sword", "songshan-jianfa");
        map_skill("parry", "songshan-jianfa");
        map_skill("dodge", "fuguanglueying");
	map_skill("force","hanbing-zhenqi");
	map_skill("unarmed","songyang-zhang");

        create_family("áÔÉ½ÅÉ", 13, "µÜ×Ó");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}

