// Room: /d/jinling/shanglin5.c

inherit ROOM;

void create()
{
	set("short", "上林道");
	set("long", @LONG
这里已是竟陵城外，往西就是著名的上林苑。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"chalu.c",
  "east" : __DIR__"shanglin4.c",
]));

	setup();
	replace_program(ROOM);
}
