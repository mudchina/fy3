// Room: /u/viviran/guandao.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是通往飞雨阁的官道。倒不如说是一片树林更为
贴切。官道的西面有一个不大的院落那就是所谓的文书
院。是情缘和飞雨小时侯读书的地方。但现在已经封了
起来，北面有一扇小门，穿过小门就可以到飞雨阁了。
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"feiyu",
  "northwest" : __DIR__"huayuan",
  "south" : __DIR__"shiqiao",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
