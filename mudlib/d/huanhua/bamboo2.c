// Room: /d/new/huanhua/bamboo2.c

inherit ROOM;

void create()
{
	set("short", "竹林");
	set("long", @LONG
一片青脆的竹林,绿色的竹叶梢还滴着露水,四外空无一人,唯有
鸟儿的轻鸣响彻林间.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"bamboo3",
  "west" : __DIR__"bamboo1",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
