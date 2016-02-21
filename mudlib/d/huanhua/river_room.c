// Room: /d/new/huanhua/river_room.c

inherit ROOM;

void create()
{
	set("short", "长江剑室");
	set("long", @LONG
长江剑室是试剑之处,一眼望去,墙上挂满了各类长短不一的剑,除此
之外,室中空空荡荡,便于出手演练.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/tangfang.c" : 1,
  __DIR__"npc/xqiushui.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"xiaolu1",
  "east" : __DIR__"hhxi",
]));

	setup();
	replace_program(ROOM);
}
