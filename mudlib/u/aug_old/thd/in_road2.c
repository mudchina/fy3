// thd:in_road2.c

inherit ROOM;

void create()
{
      set("short", "林间小路");
	set("long", @LONG
你走在一条林间小路上。在繁盛的桃花树间你已经能够看到些用竹子
建成的房屋。这些房屋在桃花树中显的那么协调，似乎它本身就是这桃花
林的一部分，而不是人造的建筑。由次可见设计者的水平。你的东边就有
这样的一所小屋。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
          "south" : __DIR__"in_road1",
	    "north" : __DIR__"square",
	    "east" : __DIR__"kitchen",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

