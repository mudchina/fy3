// thd:hill1.c

inherit ROOM;

void create()
{
      set("short", "山路");
	set("long", @LONG
这是条崎岖的山路。弹指峰当然没有石阶，它只有一条人踩出来黄土
山路。这条路颇有些陡峭，但桃花弟子都身怀绝技当然不会被这点陡峭难
住。这里只是山路的起点，上面的路可长着呢。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "northup" : __DIR__"hill2",     
          "southdown" : __DIR__"hill_foot",     
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

