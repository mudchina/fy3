// Room: /d/new/huanhua/bamboo4.c

inherit ROOM;

void create()
{
	set("short", "竹林");
	set("long", @LONG
一片青脆的竹林,绿色的竹叶梢还滴着露水,四外空无一人,唯有
鸟儿的轻鸣响彻林间.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/3e2.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dalu1",
  "west" : __DIR__"bamboo3.c",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
