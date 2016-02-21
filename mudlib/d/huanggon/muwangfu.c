// Room: /d/huanggon/muwangfu.c

inherit ROOM;

void create()
{
	set("short", "白府");
	set("long", @LONG
这是杨柳胡同底的一座宅第,朱漆的大门两边挂着两盏白色灯笼.看
来家有丧事,从门内传出隐隐哭声.一个老管家在门口偷偷的抹眼泪,此
地向南可出杨柳胡同.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/laoguanjia.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"yanghutong1",
  "north" : __DIR__"neitang",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
