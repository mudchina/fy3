// Room: /d/new/huanhua/bamboo3.c

inherit ROOM;

void create()
{
	set("short", "竹林");
	set("long", @LONG
一片青脆的竹林,绿色的竹叶梢还滴着露水,四外空无一人,唯有
鸟儿的轻鸣响彻林间.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"guihu",
  "north" : __DIR__"bamboo2",
  "east" : __DIR__"bamboo4",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
