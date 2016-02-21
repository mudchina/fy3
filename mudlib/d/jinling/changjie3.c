// Room: /d/jinling/changjie3.c

inherit ROOM;

void create()
{
	set("short", "长街");
	set("long", @LONG
这里是竟陵城的主要街道，由于竟陵城南北长而东西短，所以就行成
了这条长达两里的街道。这也是竟陵最繁华的商业街。北面就是市中
心广场了。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"shizhong.c",
  "north" : __DIR__"changjie4.c",
]));

	setup();
	replace_program(ROOM);
}
