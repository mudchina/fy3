//huazhuang
  

inherit ROOM;

void create()
{
	set("short", "化妆间");
	set("long", @LONG
这是演员的化妆间，几个演员正对着镜子化妆，也没注意你进来。墙
边一溜挂着很多衣服。边上的柜子上放了好几个面具，那个面具看上去很
精巧，带在脸上足可以以假乱真。
LONG
	);

	set("exits", ([
		"east" : __DIR__"xiyuan1",
		 	
]));
	 set("objects", ([
		__DIR__"npc/yanyuan" : 1,
		__DIR__"npc/yanyuan1" : 1,
	]));

	setup();
	replace_program(ROOM);
}

