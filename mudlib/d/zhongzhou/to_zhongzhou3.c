// Room: /d/yangzhou/to_zhongzhou3.c

inherit ROOM;

void create()
{
	set("short", "中州道");
	set("long", @LONG
这条连接中州和扬州的要道来往车马不断。南面是中州城的北门，再
向北通向长江边的渡口。道路两边是一望无边的绿色沃野。好一片江南
风光。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"to_zhongzhou2",
  "south":__DIR__"beimen",
]));
	set("outdoors","zhongzhou");

	setup();
	replace_program(ROOM);
}
