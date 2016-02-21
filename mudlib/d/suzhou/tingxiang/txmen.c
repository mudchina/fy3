// Room: /u/oldsix/room1/txmen.c

inherit ROOM;

void create()
{
	set("short", "听香水榭");
	set("long", @LONG
远远望去，见一个小洲上八九间房屋，其中两座是楼房，每间房子窗中都有
灯火映出来。小舍匾额上写着“听香水榭”，想来和阿碧的“琴韵小筑”差不多。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"down":__DIR__"huan_3",
		"north":__DIR__"ru5",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
