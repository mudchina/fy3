// Room: /d/new/huanhua/7qulang.c

inherit ROOM;

void create()
{
	set("short", "七曲廊");
	set("long", @LONG
这条走廊沿内厅而建,并穿行于花木之间,曲折回绕,平时固有沿途
赏景之妙,遇敌也有阻敌之效.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"7qulang1",
  "east" : __DIR__"huapath1",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
