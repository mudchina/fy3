// zhaohe.c
#include <ansi.h>
inherit NPC;

void create()
{
    set_name("赵鹤", ({"zhao he", "zhao", "he"}));
    set("nickname", HIC "飞天神魔" NOR );
    set("banghui", "日月教");
    set("bh_rank","长老");
    set("gender", "男性");
    set("age", 42);
    set("shen_type", -1);
    set("long",
        "他是日月神教长老。\n");
    set("attitude", "peaceful");

    set("per", 21);
    set("str", 30);
    set("int", 30);
    set("con", 30);
    set("dex", 30);

    set("kee", 3000);
    set("max_kee", 3000);
    set("gin", 1000);
    set("max_gin", 1000);
    set("force", 3000);
    set("max_force", 3000);
    set("force_factor", 300);

    set("combat_exp", 1500000);
    set("score", 0);

	set_skill("force",140);
	set_skill("hunyuan-yiqi",140);
	set_skill("unarmed",140);
	set_skill("nianhua-zhi",140);
	set_skill("dodge",140);
	set_skill("shaolin-shenfa",140);
	set_skill("parry",140);
	set_skill("staff",140);
	set_skill("fumo-zhangfa",140);

	map_skill("force","hunyuan-yiqi");
	map_skill("unarmed","nianhua-zhi");
	map_skill("dodge","shaolin-shenfa");
	map_skill("parry","nianhua-zhi");
	map_skill("staff","fumo-zhangfa");


    setup();
    carry_object(__DIR__"obj/leizhendang")->wield();
carry_object("/obj/cloth")->wear();
}

int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"摇头道：你我非亲非故，"+
                RANK_D->query_self(this_object())+"如何敢当。\n");
	if(ob->query("score")<1000)
        return notify_fail(query("name")+"道：你还是多为本教做些实事吧。\n");
        return 1;
}
