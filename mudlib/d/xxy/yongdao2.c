// Room: /d/xxy/yongdao2.c

inherit ROOM;

void create()
{
	set("short", "甬道");
	set("long", @LONG
一条很短的甬道,长约三丈,在顶端的墙面上,亮着一盏灯,通道两边
是两间大敞房.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"datang",
  "south" : __DIR__"changfang",
  "north" : __DIR__"changfang1",
]));

	setup();
	replace_program(ROOM);
}
