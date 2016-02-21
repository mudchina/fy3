// Room: /d/baituo/houmen.c

inherit ROOM;

void create()
{
	set("short", "后门");
	set("long", @LONG
这是个山庄的后门,一般没有什么来。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "baituo");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/menwei2" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"tuyuan",
]));

	setup();
	replace_program(ROOM);
}
