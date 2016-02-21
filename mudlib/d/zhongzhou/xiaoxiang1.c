// Room: /d/zhongzhou/xiaoxiang1.c

inherit ROOM;

void create()
{
	set("short", "小巷");
	set("long", @LONG
前面看起来好象要到小巷底了，巷中行人越发稀少。西北角上好象
有一座破烂房子，远远望去烟雾弥漫，陈旧不堪，原来是座破庙。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/gaibang/jiang-sy.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"guandimiao",
  "east" : __DIR__"xiaoxiang",
]));
	set("outdoors", "/d/zhongzhou");

	setup();
	replace_program(ROOM);
}
