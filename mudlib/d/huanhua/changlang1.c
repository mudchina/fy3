// Room: /d/huanhua/changlang1.c

inherit ROOM;

void create()
{
	set("short", "长廊");
	set("long", @LONG
一条长长的回廊,蓝色琉璃瓦铺面,红漆柱子每隔三丈就成对排列两边.
廊外是假山,曲径通幽,别有情趣.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"changlang2",
  "east" : __DIR__"path4",
]));

	setup();
	replace_program(ROOM);
}
