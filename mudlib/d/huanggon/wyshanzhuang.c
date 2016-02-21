// Room: /d/huanggon/wyshanzhuang.c

inherit ROOM;

void create()
{
	set("short", "忘逸山庄");
	set("long", @LONG
庄前是片小树林,好几棵树下堆着光滑的巨石,那是既供人观赏,又可
歇脚.地上打扫得很干净,显是有人经常在此流连.西边庄院门口竖了根旗
杆,上面还挂了盏灯笼.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"shulin",
  "north" : __DIR__"dating",
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
