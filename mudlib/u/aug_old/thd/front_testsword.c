// thd:front_testsword.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "试剑亭前");
	set("long", @LONG
这是试剑亭前的一片空地。两旁都是桃花树可碧绿的竹子，这两种树
木都是黄岛主最喜欢的树木。你脚下的是一大片硬泥地，很干净很平整，
只是有几个清晰可见的脚印，周围的树木上有些剑痕，看来这里就是黄药
师练剑之所。一条小径向东延伸着，一座古色古香的亭子就在眼前了。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "east" : __DIR__"testsword",
          "west" : __DIR__"eroad",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

