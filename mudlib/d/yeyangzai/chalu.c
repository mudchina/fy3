// Room: /d/yeyangzai/chalu.c

inherit ROOM;

void create()
{
	set("short", "叉路口");
	set("long", @LONG
这儿是个叉路口，由于这儿是通往南北的要道，所以行人多了起来。西
南通往武当，北面是「中州府」方向，往东则是苏州。
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "east" : "/d/suzhou/guandao4",
  "southwest" : "/d/wudang/towudang",
  "north" : __DIR__"xiaolu",
]));
	set("outdoors", "野羊寨");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
