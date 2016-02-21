// Room: /d/huanggon/sdajie1.c

inherit ROOM;

void create()
{
	set("short", "天桥");
	set("long", @LONG
天桥是京城最热闹的地方,汇聚了四方艺人,也是各类小吃最多的地
方,此地向北是南大街,南边就是永定门.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jialaoliu.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/huanggon");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"sdajie",
  "south" : __DIR__"yongdingmen",
]));

	setup();
	replace_program(ROOM);
}
