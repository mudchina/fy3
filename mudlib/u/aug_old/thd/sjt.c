// thd:sjt.c
//#include <localtime.h>

inherit ROOM;

void create()
{
      set("short", "试剑亭");
	set("long", @LONG
这里是桃花岛的试剑亭，是桃花岛弟子炼剑的地方
LONG
	);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/jiading" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"bulletin" : "...\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "east" : __DIR__"jinzhen",
//        "west" : __DIR__"neizhen",
//	    "north": __DIR__"north1",
//        "south": __DIR__"south1",
//        "northeast": __DIR__"nteast1",
//        "northwest": __DIR__"ntwest1",
//        "southeast": __DIR__"steast1",
//        "southwest": __DIR__"stwest1",
	]));
      
//	set("outdoors", "lu_town");

	setup();
	replace_program(ROOM);
}

