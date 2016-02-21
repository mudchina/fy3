// Room: /d/huanhua/hhxi.c

inherit ROOM;

void create()
{
	set("short", "浣花溪");
	set("long", @LONG
从山涧流淌而下的一条小溪流,穿过剑庐的花园,四季有不同的花朵
从溪流中漂流而下,溪上一条九曲小桥通向溪上的一座小轩.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"river_room",
  "north" : __DIR__"9quqiao",
]));

	setup();
	replace_program(ROOM);
}
