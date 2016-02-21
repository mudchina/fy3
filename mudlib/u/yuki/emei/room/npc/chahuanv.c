#include <ansi.h>
inherit NPC;
void create()
{
set_name("采花少女",({"shao nv","girl","nv"}));
        set("long",
"她看起来不过十几岁，长的十分天真
可爱。仔细看去，身材却完全不象，
眼神也流波不定，十分诡异。\n");

        set("gender", "女性");
        set("age", 14);
        set("attitude","killer");
        set("str", 40);
        set("cps", 40);
        set("int", 100);
        set("per", 100);
        set("con", 40);
        set("max_force", 1500);
        set("force", 1000);
        set("force_factor", 50);
        set("max_gin", 1000);
        set("max_kee", 1000);
        set("max_sen", 1000);
        set_skill("literate", 100);
        set_skill("force", 200);
        set_skill("emei-xinfa", 200);
        set_skill("sword", 200);
        set_skill("huifeng-jian", 200);
        set_skill("unarmed", 200);
        set_skill("sixiang-zhang", 200);
        set_skill("dodge", 100);
        set_skill("anying-fuxiang", 100);
        map_skill("force", "emei-xinfa");
        map_skill("sword", "huifeng-jian");
        map_skill("unarmed", "sixiang-zhang");
        map_skill("dodge", "anyin-fuxiang");
        set("combat_exp", 512000);
        
        setup();
	carry_object("u/yuki/emei/room/obj/thin_sword")->wield();
	carry_object("u/yuki/emei/room/obj/cloth")->wear();
}
