// Room: /d/new/huanhua/hbiting.c

inherit ROOM;

void create()
{
	set("short", "涵碧亭");
	set("long", @LONG
一座小巧的亭子,就在大道旁边,向南的南明河上一座飞桥如一道
长虹横跨,北面就是人来人往的大道.
LONG
	);
	set("outdoors", "/d/new");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"dalu",
  "south" : __DIR__"jhongqiao1",
]));

	setup();
	replace_program(ROOM);
}
