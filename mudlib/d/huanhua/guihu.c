// Room: /d/new/huanhua/guihu.c

inherit ROOM;

void create()
{
	set("short", "桂湖");
	set("long", @LONG
新都桂湖,丹桂飘香,浓绿艳红,柳暗花明,素有小西湖之称.
情潭如碧，红柱绿瓦，一片新喜的景意，雾霭中一道金色长桥
直通向湖心去.
LONG
	);
	set("outdoors", "/d/new");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"bamboo3",
  "southeast" : __DIR__"hqiuqiao",
]));

	setup();
	replace_program(ROOM);
}
