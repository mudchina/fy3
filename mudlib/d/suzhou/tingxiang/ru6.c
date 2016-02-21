// Room: /u/oldsix/room1/ru1.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
只见前后左右处处都是杨柳，但阵阵粗暴的轰叫声不断从客厅中传出来。这
等叫嚷吆喝，和周围精巧幽雅的屋宇花木实是大大不称。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east":__DIR__"ru5",
		"north":__DIR__"keting2",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
