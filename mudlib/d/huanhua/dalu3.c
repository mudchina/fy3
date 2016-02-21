// Room: /d/new/huanhua/dalu3.c

inherit ROOM;

void create()
{
	set("short", "大路");
	set("long", @LONG
一条人来人往的大路,来往人流,车辆不断.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/person.c" : 2,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"dalu2",
  "east" : __DIR__"hxianting",
]));

	setup();
	replace_program(ROOM);
}
