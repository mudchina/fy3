//midao1
  

inherit ROOM;

void create()
{
	set("short", "密道");
	set("long", @LONG
	这是一个密道，密道很小，勉强可以两个通过，两旁的墙上点着油灯，也不知
这个密道可以通到哪里。
LONG
	);

	set("exits", ([
		 "southeast" : __DIR__"midao",
		 "northup"  : __DIR__ "yanling2",
		 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

