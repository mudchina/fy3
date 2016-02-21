// thd:bedroom.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "寝室");
	set("long", @LONG
这是黄药师的寝室。屋内陈设很简单，只不过一床、一几、一椅，和
一个衣架。东面的墙上有扇窗户，打开窗户，你就能看到无尽的桃树林。
窗下还放着张云塌，上面的坐痕十分明显，这大概就是黄药师日常打坐
、冥思之所吧。
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/huang_yaoshi" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "桃花影弱飞神剑，碧海潮生按玉箫。\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
	    "south" : __DIR__"bookroom",
	]));
      
	setup();
	replace_program(ROOM);
}

