// Room: /d/zhongzhou/wendingbei4.c

inherit ROOM;

void create()
{
	set("short", "ÎÄ¶¨±±½Ö");
	set("long", @LONG
ÕâÊÇÖĞÖİ³ÇÎÄ¶¨±±½Ö£¬ÕâÀïÀëÖĞÖİ±±³ÇÃÅÒÑ²»Ô¶¡£½ÖÉÏÀäÀäÇåÇå
Ã»¼¸¸öÈËÓ°¡£½ÖµÀµÄ¶«ÃæÓĞÒ»×ùÉîÕ¬´óÔº¡£ÃÅ¿Ú¹Ò×ÅµÄØÒÉÏºÕÈ»¿Ì×Å
[1;31mÁúĞ¥É½×¯[2;37;0mËÄ¸ö´ó×Ö¡£Î÷ÃæÊÇÒ»³¤ÌõµÄÆ½·¿¡£
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"wendingbei3",
  "east" : __DIR__"huiguojv",
  "west" : __DIR__"congwu",
  "north" : __DIR__"beimen",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/zhongzhou");
	set("objects", ([ /* sizeof() == 1 */
  "/d/baituo/npc/ouyangke" : 1,
]));

	setup();
	replace_program(ROOM);
}
