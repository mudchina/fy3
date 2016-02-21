// By Mr.music  zhenjiang's 渡口路

inherit ROOM;

void create()
{
	set("short", "渡口路");
	set("long", @LONG
	这里向北是通往去扬州城的渡口，向南是本城最有名的春来茶馆。
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
		"north" : __DIR__"dukou",
		"south" : __DIR__"chaguan",
	]));

	setup();
//	"/obj/board/mainboard"->foo();
}

