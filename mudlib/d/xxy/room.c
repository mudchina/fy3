// Room: /d/xxy/room.c

inherit ROOM;

void create()
{
	set("short", "空房间");
	set("long", @LONG
这是一间什么都没有的房间。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"pomiao",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");

	setup();
	replace_program(ROOM);
}
