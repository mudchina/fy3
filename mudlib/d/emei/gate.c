// Room: /d/emei/gate.c

inherit ROOM;

void create()
{
	set("short", "凤凰坪");
	set("long", @LONG
凤凰坪前,古柏森森,参天的巨木拔地而起,直上云天,地上却
很干净,显然经常有人打扫,向北就是有名的报恩寺,旁边有条小
路,不知通向何处.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/hui.c" : 1,
  __DIR__"npc/dao.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/emei");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"baoenshi",
  "east" : __DIR__"huaying",
  "southup" : __DIR__"fenhuang",
]));

	setup();
	replace_program(ROOM);
}
