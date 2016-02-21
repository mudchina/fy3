inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("Ð»ÔÆÑÌ",({"xie yunyan","xie"}));
	set("gender","Å®ÐÔ");
	set("nickname","Ç§½¿°ÙÃÄ");
	set("age",18);
	set("combat_exp",1000);
	set_temp("apply/defense",30);
	set_temp("apply/attack",15);
	set_temp("apply/armor",20);
	set_temp("apply/damage",5);
        set("attitude", "friendly");
        set("vendor_goods", ([
                "×êÊ¯½äÖ¸":__DIR__"obj/ring",
        ]));

	set("long","ËýÃæÈÝ½¿ÃÄ£¬Æ¤·ô¹â»¬°×ÄÛ£¬Ò»Ë«ºÚíø¹ËÅÎÁôÇé£¬Ã÷Ä¿ÉÆíù¡£\n");
	set("area_name","³É¶¼Öé±¦µê");
        setup();
carry_object(__DIR__"obj/necklace")->wear();
carry_object(__DIR__"obj/pink_cloth")->wear();
carry_object(__DIR__"obj/flower_shoe")->wear();
carry_object(__DIR__"obj/goldring")->wear();
}

void init()
{
        object area;
        area=new("/obj/area");
	area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
	::init();
        add_action("do_vendor_list", "list");

}
