// Room: /d/new/huanhua/path4.c

inherit ROOM;

void create()
{
	set("short", "小径");
	set("long", @LONG
院中小径,由五色石子铺就.两边的芭蕉,紫琼的枝叶不时伸到路中.
向北一栋小阁楼为振眉阁,西面有一带长廊,不知伸向何处.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"changlang1.c",
  "north" : __DIR__"zhengmei.c",
  "south" : __DIR__"path3.c",
]));

	setup();
	replace_program(ROOM);
}
