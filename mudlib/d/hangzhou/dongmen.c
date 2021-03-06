// Room: /d/hangzhou/dongmen.c

inherit ROOM;

void create()
{
	set("short", "杭州东门");
	set("long", @LONG
高大的青灰色城墙,深邃的藏兵洞.无不显出这座城池的战略地位.
门口森严的盘差,来往行人,旅客,商贩,士兵在这儿排成了长龙.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bing.c" : 2,
]));
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"duanqiao",
  "east" : __DIR__"dalu.c",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
