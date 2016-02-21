// Room: /u/uuui/xuedao/xuedao62.c

inherit ROOM;

void create()
{
	set("short", "前广场");
	set("long", @LONG
这里是一片空地，地上铺着石砖，打扫的一尘不染，
甚至连片树叶都没有。偌大的广场空荡荡的，只有广场
中央的一个香炉，一排挂满了各种兵器的兵器架子，再
没有旁的东西了。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"xuedao61",
  "south" : __DIR__"xuedao63",
  "east" : __DIR__"xuedao58",
]));

	setup();
	replace_program(ROOM);
}
