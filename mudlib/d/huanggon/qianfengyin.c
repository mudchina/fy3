// Room: /d/huanggon/qianfengyin.c

inherit ROOM;

void create()
{
	set("short", "前锋营");
	set("long", @LONG
前锋营是京师三大军之一,统领阿尔泰,治军极严,可是由于他惧内又
要养小老婆,给骄骑营统领那住了把柄,所以声望不高.营中军士往来巡逻
北边是西大街.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/qianfengying.c" : 2,
  __DIR__"npc/aertai.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"wdajie",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
