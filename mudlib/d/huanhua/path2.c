// Room: /d/new/huanhua/path2.c

inherit ROOM;

void create()
{
	set("short", "小径");
	set("long", @LONG
院中小径,由五色石子铺就.两边的芭蕉,紫琼的枝叶不时伸到路中.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"path3",
  "southeast" : __DIR__"path1",
]));

	setup();
	replace_program(ROOM);
}
