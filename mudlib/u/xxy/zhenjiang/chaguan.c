// By Mr.music  zhenjiang's 春来茶馆

inherit ROOM;

void create()
{
	set("short", "春来茶馆");
	set("long", @LONG
	这里是镇江城最大的茶馆，南来北往的客人大都在此歇脚。需要些
点心和茶水可以在此小坐，需要休息也可以到楼上旅店小憩。这里向北就是
到扬州城的渡口，向东通往苏州城。

LONG
	);

//	set("no_fight", 1);
	set("valid_startroom", 1);
        set("no_sleep_room",1);

//	set("item_desc", ([
//		"paizi" : "楼上雅座，每夜五十两白银。\n",
//	]));

	set("objects", ([
		__DIR__"npc/xiaoer" : 1,
//                __DIR__"npc/weixiaobao"  : 1,
	]));

	set("exits", ([
		"north" : __DIR__"dukoulu",
		"east" : __DIR__"tosz",
                "up" : __DIR__"chaguan2",
                "south" : __DIR__"nanjie",
	]));

	setup();
//	"/obj/board/mainboard"->foo();
}

int valid_leave(object me, string dir)
{

	if ( !me->query_temp("rent_paid") && dir == "up" && !wizardp(me))
	return 
notify_fail("店小二挡在楼梯前，奸笑道：楼上是客房，您老还是大厅坐吧!\n");

// if who upstair for post in wizroom , back money to it.

	return ::valid_leave(me, dir);
}
