//hutong2
  

inherit ROOM;

void create()
{
	set("short", "小胡同");
	set("long", @LONG
这里是一条小胡同，就在白天这里也是昏暗不堪。这里似乎到了胡同
的尽头，有一扇门紧关着。
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		 
		"southwest" : __DIR__"hutong1",
		 		 
	]));
      set("objects", ([
		__DIR__"npc/liumang" : 1,
	]));

	setup();
	replace_program(ROOM);
}

