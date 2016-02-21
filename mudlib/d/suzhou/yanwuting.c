// Room: /u/o/oldsix/room/ywt.c

inherit ROOM;

void create()
{
	set("short", "演武厅");
	set("long", @LONG
巡捕们平时练功的场所。地上放着几个石锁，墙角的架子上乱七八糟的堆
着一些武器。厅中央站着几个光膀子的大汉，浑身湿透，显然刚刚练过一番。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"south" :__DIR__"shiziru",
	"east" :__DIR__"xiaomen",
]));
	set("objects",([
		__DIR__"npc/zhuanghan":1,
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
