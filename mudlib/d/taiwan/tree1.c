// Room: /d/taiwan/tree1.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
这是一条小路,由于很长时间没人走过,连路面上都长出了野草.一直
通向远处的一片树林.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"undertree",
  "west" : __DIR__"tree2",
]));
	set("outdoors", "/d/taiwan");

	setup();
	replace_program(ROOM);
}
