//danjian
  

inherit ROOM;

void create()
{
	set("short", "鸦片馆");
	set("long", @LONG
这是鸦片馆内的一个小单间，有几个人正在打麻将。看上去这个鸦片
馆就是他们开的。
LONG
	);

	set("exits", ([
		 "west" : __DIR__"yanguan",
		 
		 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

