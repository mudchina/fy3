// Room: /d/lingjiu/caifeng.c

inherit ROOM;

void create()
{
	set("short", "潇湘馆");
	set("long", @LONG
这是『灵鹫宫』的裁缝室。几个女子围坐在一块，飞针走线，苦练女
红，难道她们是为了以后找一个好婆家吗？ 
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/lingjiu/tbyang.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"changl10",
]));

	setup();
	replace_program(ROOM);
}
