// Room: /d/quanzhou/bei-door.c

inherit ROOM;

void create()
{
	set("short", "泉州北门");
	set("long", @LONG
这里是泉州的北门,高大的城墙露出历史的苍桑,墙脚边是青青野草, 
随风而舞,守卫正严密地查看路引.等着进城的人们排成了队伍. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"nstreet1",
  "north" : __DIR__"chayuan",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bing.c" : 3,
]));

	setup();
	replace_program(ROOM);
}
