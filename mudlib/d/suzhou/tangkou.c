// Room: /u/oldsix/room2/tangkou.c

inherit ROOM;

void create()
{
	set("short", "大堂堂口");
	set("long", @LONG
一条笔直的道路直通苏州府大堂，两边的绿树随风沙沙作响。几个彪形大
汉手握兵刃立于堂口两侧。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
		"east" :__DIR__"datang",
		"west" :__DIR__"shiziru",
]));
	set("objects",([
]));
	    set("outdoors","room");
	setup();
	replace_program(ROOM);
}
