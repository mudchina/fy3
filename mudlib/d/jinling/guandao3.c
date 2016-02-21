// Room: /d/jinling/guandao3.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是一条由官府铺设的道路，比较宽阔，可容五马并驱。
一眼望去没有尽头。路上不时有三三两两的行人路过。
使你并不觉得十分孤单。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"guandao2",
  "west" : __DIR__"yizhan",
]));
set("outdoors","/d/jingling");

	setup();
	replace_program(ROOM);
}
