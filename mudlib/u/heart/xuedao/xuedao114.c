// Room: /u/uuui/xuedao/xuedao114.c

inherit ROOM;

void create()
{
	set("short", "小溪畔");
	set("long", @LONG
清澈的小溪水流潺潺，洁净的溪水中偶尔会有一两条
小小的鱼儿逆流而游。溪边的小树上停着的小鸟也在“
滴溜溜”的唱着歌，十分悠闲的样子。北边是片草地。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"xuedao81",
]));

	setup();
	replace_program(ROOM);
}
