// thd:sleeproom.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "休息室");
	set("long", @LONG
这里是休息室。房中靠墙摆这几张云塌，屋子收拾的很干净，差不多
是一尘不染。房中的光线很暗，窗子也都关着，一进来你就不由自主的想
睡觉。
LONG
);

      set("exits", ([ /* sizeof() == 1 */
	    "east" : __DIR__"in_road3",
	]));

	set("no_fight", 1);
	set("sleep_room", 1);
	set("sleep_equipment", "云塌");
      
	setup();
	replace_program(ROOM);
}

