// thd:forest_start.c

inherit ROOM;

void create()
{
      set("short", "绿竹林");
	set("long", @LONG
这里有一大片的竹林。你眼前是一大片的绿，那绿是那么的生动，那
么的真实，充满了勃勃生机。这片绿可你身后的那片红交相辉映，营造出
了一个人间仙境。你的脚下是条泥土小路向竹林深处延伸着，你甚至还能
闻到泥土的芳香。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 2 */
          "northwest" : __DIR__"sroad",
          "south" : __DIR__"forest_road1",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

