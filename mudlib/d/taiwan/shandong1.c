// Room: /d/taiwan/shandong1.c

inherit ROOM;

void create()
{
	set("short", "山洞");
	set("long", @LONG
这是一条通向山中的隧道,两边的石壁上相隔不多远就有一颗夜明珠
发出光明,照射着这地方有些阴森恐怖.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "southwest" : __DIR__"room1",
  "north" : __DIR__"shandong2",
]));

	setup();
	replace_program(ROOM);
}
