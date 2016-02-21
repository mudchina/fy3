// Room: /d/jinling/guandao4.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是一条由官府铺设的道路，非常宽阔，可容八马并驱。
是南北交通要道。行人明显多了，不时还有骑马的和赶车的
经过。

LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"yizhan.c",
  "south" : __DIR__"guandao5.c",
]));
	set("outdoors", "/d/jingling");

	setup();
	replace_program(ROOM);
}
