// Room: /d/suzhou/tuoman/loushang.c

inherit ROOM;

void create()
{
	set("short", "ÔÆ½õÂ¥ÉÏ");
	set("long", @LONG
Ö»¼ûÂ¥ÉÏ³ÂÉè¸»Àö£¬Ò»·ùÖĞÌÃ»æµÄÊÇ¿×È¸¿ªÆÁ£¬Á½ÅÔÒ»¸±Ä¾Áª£¬Ğ´µÄÊÇ£º
    [1;32mÆáÒ¶ÔÆ²îÃÜ£¬²è»¨Ñ©¶Êåû[2;37;0m
    ×Ö¼£±¥ÂúÔ²Èó£¬ËÆºõ³ö×ÔÒ»Î»Ñø×ğ´¦ÓÅµÄÄĞÈËÖ®ÊÖ¡£Ò»Î»ÖĞÄêÅ®×Ó£¬ÕıÍû
×ÅÕâ¸±¶ÔÁª´ô´ôµÃ³öÉñ¡£
LONG
	);
	set("objects",([
		__DIR__"npc/wangfuren":1,
]));
	set("exits", ([ /* sizeof() == 1 */
		"down":__DIR__"yjlou",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
