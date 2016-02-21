// Room: /d/huanggon/ciqinggon.c

inherit ROOM;

void create()
{
	set("short", "太后寝宫");
	set("long", @LONG
皇太后寝宫中拉着重重红色纬帘,西面壁间一个大壁橱边是个放糕点
的柜子,床边的桌上一枝大红蜡烛还点亮着,四边的窗户都拉上了窗帘.西
面通向御花园.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/huangtaihou.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"cininggon",
]));

	setup();
	replace_program(ROOM);
}
