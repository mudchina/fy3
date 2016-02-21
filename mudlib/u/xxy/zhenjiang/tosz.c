
// By Mr.music  zhenjiang's 苏州路

inherit ROOM;

void create()
{
	set("short", "苏州路");
	set("long", @LONG
	这里是通往苏州的苏州路，一度曾经繁华过，后来由于水运的发达，
这里渐渐冷清了，加上近来传说不太安全，有钱人都改从扬州走水路了。
LONG
	);

	set("valid_startroom", 1);
        set("no_sleep_room",1);

//	set("item_desc", ([
//		"paizi" : "楼上雅座，每夜五十两白银。\n",
//	]));

	set("objects", ([
		__DIR__"npc/xiaofan" : 1,
	]));

	set("exits", ([
		"east" : "/d/suzhou/guandao4",
		"west" : __DIR__"chaguan",
	]));

	setup();
//	"/obj/board/mainboard"->foo();
}

