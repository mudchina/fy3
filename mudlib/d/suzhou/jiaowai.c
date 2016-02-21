// Room: /u/oldsix/room1/jiaowai.c

inherit ROOM;

void create()
{
	set("short", "ËÕÖİ½¼Íâ");
	set("long", @LONG
ÈıÔÂÌìÆø£¬ĞÓ»¨¼Ğ¾¶£¬ÂÌÁø´¹ºş£¬Å¯ÑóÑóµÄ´º·ç´µÔÚÉíÉÏ£¬µ±ÕæÊÇõ¸õ¸Óû×í¡£
Äã²»½ûÍÑ¿ÚÒ÷µÀ£º[1;32m²¨ÃìÃì£¬ÁøÒÀÒÀ£¬¹Â´å·¼²İÔ¶£¬Ğ±ÈÕĞÓ»¨·É¡£[2;37;0mÎ÷±ßË®ÌìÒ»É«£¬
ºÉÏãÕóÕó¡£¶«±ßÒÀÏ¡Íû¼ûËÕÖİ³ÇÃÅ¡£
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"west" :__DIR__"baigongti",
		"east" :__DIR__"xichengmen",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
