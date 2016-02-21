// thd:yun_jian.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "碧云涧");
	set("long", @LONG
在这里的山道旁有条小溪顺山而下。它的正下方就是千尺瀑，谁又能
想到下面那气势磅礴磅礴在这里竟然只不过是条涓涓小溪呢？溪水如镜，
映射着天上飘浮的白云，煞是好看。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
          "east" : __DIR__"spring",
          "westdown" : __DIR__"hill8",
          "northup" : __DIR__"hill9",
  	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

