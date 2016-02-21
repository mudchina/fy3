// Room: /d/jinling/chengmen1.c

inherit ROOM;

void create()
{
	set("short", "北城门");
	set("long", @LONG
这里就是竟陵北门，近来局势不太稳定，城内外常因帮派间抢地盘而发
生流血事件，所以城门口兵卫很多，对过往之人盘查很严。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"changjie6.c",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/weibing.c" : 4,
  __DIR__"npc/yinjiaweishi.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
