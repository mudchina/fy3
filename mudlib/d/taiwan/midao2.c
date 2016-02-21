// Room: /d/taiwan/midao2.c

inherit ROOM;

void create()
{
	set("short", "密道");
	set("long", @LONG
一条漆黑的密道,耳边隐隐听到老鼠跑过的声音,你不敢大意,小心地
摸着粗糙的石壁向前走.前面似乎露出亮光来.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/lengchuanyun.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"midao1",
  "out" : __DIR__"huayuan",
]));

	setup();
	replace_program(ROOM);
}
