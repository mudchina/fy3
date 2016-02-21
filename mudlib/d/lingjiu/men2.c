// Room: /d/lingjiu/men2.c

inherit ROOM;

void create()
{
	set("short", "Êé·¿´óÃÅ");
	set("long", @LONG
ÕâÊÇÊé·¿ÃÅ¿Ú£¬Ö»¿´¼û´óÃÅÁ½ÅÔÌù×ÅÒ»¸±¶ÔÁª(duilian)£¬Ì§Í·ÉÏÍû¡£
ÃÅé¹ÉÏÒ»¿é´óØÒ(bian)ÉÏĞ´×Å¼¸¸ö´ó×Ö¡£
LONG
	);
	set("no_clean_up", 0);
	set("item_desc", ([ /* sizeof() == 2 */
  "bian" : "[1;36mÈÎÎÒåĞÒ£
[2;37;0m",
  "duilian" : "ĞĞµ½Ë®Çî´¦£¬×ø¿´ÔÆÆğÊ±.
",
]));
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/lingjiu/zhujian.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"changl12",
  "east" : __DIR__"shufang",
]));
	set("outdoors", "lingjiu");

	setup();
	replace_program(ROOM);
}
