// Room: /d/xxy/gardon3.c

inherit ROOM;

void create()
{
	set("short", "花园");
	set("long", @LONG
这是花园中的一条五彩石子路,从无数的花木中穿过.远处雾霭中露出红
檐一角,那就是天风楼.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");
	set("item_desc", ([ /* sizeof() == 1 */
  "n" : "",
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"gardon2",
  "south" : __DIR__"tianfeng",
]));

	setup();
	replace_program(ROOM);
}
