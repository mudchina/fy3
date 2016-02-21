// Room: /d/new/huanhua/dalu.c

inherit ROOM;

void create()
{
	set("short", "大路");
	set("long", @LONG
一条人来人往的大路,来往人流,车辆不断.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"dalu2",
  "south" : __DIR__"hbiting",
  "north" : __DIR__"dalu1",
]));

	setup();
	replace_program(ROOM);
}
