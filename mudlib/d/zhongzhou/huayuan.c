//huayuan	
  

inherit ROOM;

void create()
{
	set("short", "小花园");
	set("long", @LONG
这是县太爷府前的小花园，花草树木，鸟语花香。好一个悠闲的地
方。透过一簇牡丹花，看见北面就是县太爷的府邸。西面的厢房略微陈旧
一点。可能是府内下人的屋子。
LONG
	);
set("outdoors","/d/zhongzhou");

	set("exits", ([
		"west" : __DIR__"xiaren",
		"north" : __DIR__"taiyefu",
		"east" :__DIR__"zoulang", 
	]));
//        set("objects", ([
//                "/npc/npc": 2,
//	]));

	setup();
	replace_program(ROOM);
}

