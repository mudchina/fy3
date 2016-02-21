// Room: /d/new/huanhua/7qulang2.c

inherit ROOM;

void create()
{
	set("short", "七曲廊");
	set("long", @LONG
这条走廊沿内厅而建,并穿行于花木之间,曲折回绕,平时固有沿途
赏景之妙,遇敌也有阻敌之效.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/3e3.c" : 1,
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"7qulang1",
  "north" : __DIR__"7qulang3",
]));

	setup();
	replace_program(ROOM);
}
