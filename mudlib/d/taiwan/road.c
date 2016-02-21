// Room: /d/taiwan/road.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
一条黄泥路,路中给行过的车辆压出了两条深深的车痕.有两三个穿
着破烂的小孩在路上你追我赶的玩耍.路两边是连绵的水蹈田.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"matou",
  "south" : __DIR__"road1",
]));
	set("outdoors", "/d/taiwan");

	setup();
	replace_program(ROOM);
}
