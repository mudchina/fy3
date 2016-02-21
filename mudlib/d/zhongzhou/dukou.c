// Room: /d/zhongzhou/dukou.c

inherit ROOM;

void create()
{
	set("short", "¶É¿Ú");
	set("long", @LONG
ÕâÀïÊÇÍ¨ÍùÈ¥ÑïÖİ³ÇµÄ¶É¿Ú£¬Ç°Ãæ¾ÍÊÇ¹ö¹ö³¤½­£¬ÏòÄÏ¾ÍÊÇÖĞÖİ¸®¡£
½­±ßÍ£×ÅĞ©[33mĞ¡´¬[37m¡£²»Ô¶´¦Ò»×ù´óÇÅ£¬Ğ±Ğ±µÄÀ­ÓÚ½­ÃæÉÏ¡£
LONG
	);
	set("no_clean_up", 0);
	set("valid_startroom", 1);
	set("no_sleep_room", 1);
	set("item_desc", ([ /* sizeof() == 2 */
  "chuan" : "ÕâĞ©Ğ¡´¬Ò²Ğí¿ÉÒÔÉÏ¡£
",
  "´¬" : "ÕâÊÇĞ©Ğ¡´¬£¬ºÃÏóÃ»ÈË¹ÜÀí£¬Ò²Ğí¿ÉÒÔ×Ô¼º»®.
",
]));
	set("outdoors", "zhongzhou");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shusheng" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"daqiao",
  "south" : __DIR__"dukoulu",
]));

	setup();
	replace_program(ROOM);
}
