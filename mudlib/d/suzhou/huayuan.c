// Room: /u/o/oldsix/room/hhy.c

inherit ROOM;

void create()
{
	set("short", "后花园");
	set("long", @LONG
园中种值着各式各样的花草，令你目不暇接。空气中迷漫着的花香让你不
由得精神一振，所有的疲惫仿佛一扫而光。几位花匠正在园中小心亦亦的工作
着。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"south" :__DIR__"xiaomen",
]));
	set("objects",([
		__DIR__"npc/huajiang":2,
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
