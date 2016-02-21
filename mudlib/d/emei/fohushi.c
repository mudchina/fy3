// Room: /d/emei/fohushi.c

inherit ROOM;

void create()
{
	set("short", "伏虎寺");
	set("long", @LONG
终于走出了密林,眼前出现一座寺院,这就是有'密林藏伏虎'之称
的伏虎寺了,寺边两条小溪缓缓流过,溪水清澈无比,名为虎溪,唐时诗
人唐求在他的'夜上隐居寺'中写道:寻师拟学空,空在虎溪东.
LONG
	);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"milin1",
  "north" : __DIR__"ligouyuan",
  "westup" : __DIR__"xixiang",
]));
	set("outdoors", "/d/emei");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
