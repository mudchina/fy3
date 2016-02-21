// Room: /d/yangzhou/dukou.c

inherit ROOM;

void create()
{
	set("short", "¶É¿Ú");
	set("long", @LONG
ÕâÀïÊÇÍ¨ÍùÈ¥ÖĞÖİ³ÇµÄ¶É¿Ú£¬Ç°Ãæ¾ÍÊÇ¹ö¹ö³¤½­£¬Ïò±±¾ÍÊÇÑïÖİ³Ç¡£
½­±ßÍ£×ÅĞ©[33mĞ¡´¬[37m¡£²»Ô¶´¦ÊÇÖĞÖİ´óÇÅ¡£
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"dukoulu",
  "south" : "/d/zhongzhou/daqiao",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shusheng" : 1,
]));
	set("item_desc", ([ /* sizeof() == 2 */
  "´¬" : "ÕâÊÇĞ©Ğ¡´¬£¬ºÃÏóÃ»ÈË¹ÜÀí£¬Ò²Ğí¿ÉÒÔ×Ô¼º»®.
",
  "chuan" : "ÕâĞ©Ğ¡´¬Ò²Ğí¿ÉÒÔÉÏ¡£
",
]));
	set("no_sleep_room", 1);
	set("valid_startroom", 1);

	setup();
	replace_program(ROOM);
}
