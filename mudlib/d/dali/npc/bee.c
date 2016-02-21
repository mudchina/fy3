// bee.c ¶¾·ä
// Date: Sep.22 1997

inherit NPC;

void create()
{
        set_name("¶¾·ä", ({ "dufeng", "bee" }) );
        set("race", "Ò°ÊÞ");
        set("age", 20);
        set("long", "Ò»Ö»É«²Ê°ßìµ´ó¸öÒ°·ä£¬³ÉÈº½á¶ÓµÄ¡£\n");
        set("attitude", "aggressive");
        set("shen_type", -1);

        set("limbs", ({ "·ä×ì","·äÑü","·ä³á","Î²´Ì" }) );
	set("verbs", ({"bite","poke"}));

        set("combat_exp", 500);
        set("force",80);
        set("max_force",80);
        set("force_factor",50);
        set("max_gin",50);

        set_temp("apply/attack", 20);
        set_temp("apply/defense", 30);
        set_temp("apply/armor", 10);
        setup();
}

