// smith.c

inherit NPC;
inherit F_VENDOR;

void create()
{
        set_name("Ìú½³", ({ "tiejiang", "smith" }));
	set("title", "Ìú½³ÆÌÀÏ°å");
	set("shen_type", 1);

        set("gender", "ÄÐÐÔ" );
        set("age", 33);
        set("long", "Ìú½³ÕýÓÃÌúÇ¯¼Ð×¡Ò»¿éºìÈÈµÄÌú¿é·Å½øÂ¯ÖÐ¡£\n");

        set("combat_exp", 400);
	set("attitude", "friendly");
        set("vendor_goods",([
                   "³¤½£":"/obj/weapon/sword",
                   "¸Öµ¶":"/obj/weapon/blade",
                   "Ìú´¸":"/obj/weapon/hammer",
                   "ÍÀµ¶":"/d/city2/obj/tudao",
        ]));

	setup();
carry_object("/obj/cloth")->wear();
}

void init()
{
        add_action("do_vendor_list", "list");
}
