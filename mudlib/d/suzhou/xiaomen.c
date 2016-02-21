// Room: /u/o/oldsix/room/smalldoor.c

inherit ROOM;

void create()
{
	set("short", "小门");
	set("long", @LONG
这是个月形小门，将前后两堂分隔开来。包大人休息的时侯，喜欢在后
堂的花园内散步。去过的人都知道里面有不少奇花异草。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"yanwuting",
	"south" :__DIR__"road1",
	"north" :__DIR__"huayuan",
]));
	set("objects",([
		]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
