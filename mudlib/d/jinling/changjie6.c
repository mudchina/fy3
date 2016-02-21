// Room: /d/jinling/changjie6.c

inherit ROOM;

void create()
{
	set("short", "长街");
	set("long", @LONG
这里是竟陵城的主要街道，由于竟陵城南北长而东西短，所以就行成
了这条长达两里的街道。这也是竟陵最繁华的商业街。前面就是竟陵的
北门了，西面有一条黑黑的小胡同，不时有男女进出。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"hutong.c",
  "south" : __DIR__"changjie5.c",
  "north" : __DIR__"chengmen1.c",
]));

	setup();
	replace_program(ROOM);
}
