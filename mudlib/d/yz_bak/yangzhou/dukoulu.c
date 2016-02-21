// By Mr.music  yangzhou's 渡口路

inherit ROOM;

void create()
{
	set("short", "渡口路");
	set("long", @LONG
	这里向北是通往扬州城，向南是渡口。
LONG
	);

	set("valid_startroom", 1);
        set("no_sleep_room",1);

//	set("item_desc", ([
//		"paizi" : "楼上雅座，每夜五十两白银。\n",
//	]));

	set("objects", ([
		__DIR__"npc/nanhai" : 1,
                __DIR__"npc/nuhai"  : 1,
	]));

	set("exits", ([
		"north" : __DIR__"nanmen",
		"south" : __DIR__"dukou",
	]));

	setup();
//	"/obj/board/mainboard"->foo();
}

