//yaopu1
  

inherit ROOM;

void create()
{
	set("short", "药铺内院");
	set("long", @LONG
这里就是药铺内院，你一走进来就觉得一股热浪。只见十几只炉子
都在熬药，有几个药铺的伙计在忙碌着。你要熬药的话就要依着药方把
放进药罐里。你还可以问问伙计几种常用的药方。
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"out" : __DIR__"yaopu",
		
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

