// thd:workroom.c
// 97.7.21 by Aug

inherit ROOM;

void create()
{
      set("short", "工作室");
	set("long", @LONG
这里是迎风的工作室，别看迎风他是个武侠世界的巫师，他的工作室
到是蛮现代化的。在这里有一台带30寸显示器P8，和一只2Mbps 的大猫。
在屋子的外面有一30来米高的发射架，不知是干什么用的。
LONG
);


//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 3 */
	    "thd" : "/u/aug/thd/hall",
     "sz" : "/u/aug/shenzhen/shenzhen",

	    "lu" : "/d/lu/hall",
	    "wiz" : "/d/wiz/meeting",
	]));
      
	setup();
	replace_program(ROOM);
}

