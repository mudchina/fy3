// Room: /d/new/huanhua/changlang2.c

inherit ROOM;

void create()
{
	set("short", "长廊");
	set("long", @LONG
一条长长的回廊,蓝色琉璃瓦铺面,红漆柱子每隔三丈就成对排列两边.
廊外是假山,曲径通幽,别有情趣.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"changlang4",
  "east" : __DIR__"changlang1.c",
  "northwest" : __DIR__"changlang3.c",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
