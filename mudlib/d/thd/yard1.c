// thd:yard1.c

inherit ROOM;

void create()
{
      set("short", "后花园");
	set("long", @LONG
这是个花园。在桃花岛中，你只有在这里才能看到除桃花树和竹子之
外的花草树木。这个园子里的花草都是黄岛主的朋友送给他的名贵品种。
你在这里能看到不少稀奇古怪的花草，有的还有毒呢。你在园中走动之时
，可要当心一点嗷。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/huang_yaoshi" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
	    "southwest" : __DIR__"hall",
	    "north" : __DIR__"yard2",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

