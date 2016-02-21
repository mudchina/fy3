// Room: /u/uuui/xuedao/xuedao65.c

inherit ROOM;

void create()
{
	set("short", "碎石小路");
	set("long", @LONG
这里通往石牢的小路，全部用碎石铺成，路两旁光
秃秃的什么也没有，走在路上隐约能听到石牢里传来的
惨叫声。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"xuedao66",
  "east" : __DIR__"xuedao61",
]));

	setup();
	replace_program(ROOM);
}
