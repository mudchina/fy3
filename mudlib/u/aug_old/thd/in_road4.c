// thd:in_road4.c

inherit ROOM;

void create()
{
      set("short", "林间小路");
	set("long", @LONG
这是条林间小路。四周粉红的桃花时不时的飘下两、三片落花，你蹋
着这沾着落花的新泥，走在这清雅的小路上，别有一番风味。你西边的小
屋常常冒出几缕青烟，似乎有人在烧什么东西。路的东面就是桃花岛的大
厅了。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
          "south" : __DIR__"square",
	    "north" : __DIR__"hall",
	    "west" : __DIR__"medicine_room",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

