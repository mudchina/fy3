// thd:wp.c

inherit ROOM;

void create()
{
      set("short", "绿竹林");
	set("long", @LONG
现在你置身于一大片无边的绿竹林中。你四周的竹子或粗或细，或长
或短形态各异，都错落有致的排列着。四周万籁俱寂，只听到风过竹叶的
沙沙声。置身于此你不由的静下来，想一想人生、宇宙的哲理。也只有在
这里你才能摒弃私心杂念，超脱俗世。这里除了竹子外，就是一些小花、
小草了，它们看来不起眼，确散发着淡淡的药香。从这里往东就是积翠亭
了。
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "obj/flower1" :  2,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "east" : __DIR__"green_pavilion",          
          "northeast" : __DIR__"nwp",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}




