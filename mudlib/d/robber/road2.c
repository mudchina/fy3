// Room: /d/new/robber/road2.c

inherit ROOM;

void create()
{
	set("short", "杂草小路");
	set("long", @LONG
一条长满杂草的小路，你需要不断拨开挡住双眼的草叶和灌木丛，才能
找到前方的路，向南看，一群乌鸦正呀呀叫着投入一片松林。
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/jiangnan");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"road3",
  "southwest" : __DIR__"road1",
]));

	setup();
	replace_program(ROOM);
}
