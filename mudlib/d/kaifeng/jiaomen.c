// Room: /d/kaifeng/jiaomen.c

inherit ROOM;

void create()
{
	set("short", "小角门");
	set("long", @LONG
在墙角边开的一个小门，供寺中的僧人就近出外。门是用松木作的，
原先的红漆已经剥落得差不多了。一边的围墙蹋了半边，寻常人都能
爬进来，南边是片菜地，出了角门是条大街。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhangsan.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"caidi5",
  "north" : __DIR__"eroad",
]));
	set("outdoors", "/d/kaifeng");

	setup();
	replace_program(ROOM);
}
