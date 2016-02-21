// thd:in_road1.c
// 97.7.13  by Aug

inherit ROOM;

void create()
{
      set("short", "林间小路");
	set("long", @LONG
这是条小路。两旁都是桃花树，放眼望去，就象一朵朵的粉色云彩，
看来煞是好看。蜜蜂、彩蝶在花间飞舞着，更增添了一分生机。耳旁还不
时传来一声声清脆的鸟鸣。一切似乎都是那么的美好。
LONG
);

	set("objects", ([ /* sizeof() == 1 */
		__DIR__ "npc/yapu2" :  1,
	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "south" : __DIR__"neizhen",
	    "north" : __DIR__"in_road2",
	]));
      
	set("outdoors", "thd");

	setup();
	replace_program(ROOM);
}

