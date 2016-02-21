// Room: /d/jinling/mingwotang.c

inherit ROOM;

void create()
{
	set("short", "明窝堂");
	set("long", @LONG
你掀开门口的棉布帘子，顿觉一种奇异的气氛扑面而来。
夹杂着烟味酒味和脂粉味。隐约听见里面嘈杂的声音。门口左面
靠墙有一高高的柜台。而门口两旁则站着几个彪型大汉。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"hutong2.c",
  "north" : __DIR__"duchang.c",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dashou1.c" : 4,
]));

	setup();
	replace_program(ROOM);
}
