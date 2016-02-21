// Room: /d/quanzhou/dalu1.c

inherit ROOM;

void create()
{
	set("short", "大路");
	set("long", @LONG
一条笔直宽阔的大路,路边是连绵起伏的农田,偶而能看到牧童牵着
老牛在远处晃过.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"dongmen",
  "east" : __DIR__"dalu2",
]));
	set("outdoors", "/d/quanzhou");

	setup();
	replace_program(ROOM);
}
