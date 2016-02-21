// Room: /d/jinling/hutong2.c

inherit ROOM;

void create()
{
	set("short", "小胡同");
	set("long", @LONG
你走进了一条阴暗的小胡同,眼前不时晃过一群群男女。看来有点蹊跷？
你眼前出现一扇小门，不时走出一两个无精打采的汉子。对面却是灯红酒绿
歌舞声，欢笑声不决于耳。
LONG
	);
	set("no_clean_up", 0);
        set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/gongzi.c" : 1,
]));
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"hutong1.c",
  "north" : __DIR__"mingwotang.c",
  "south" : __DIR__"fengyage.c",
]));

	setup();
	replace_program(ROOM);
}
