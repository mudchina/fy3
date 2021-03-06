// Room: /d/meizhuang/xiaolu2.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
你走在一条幽静的小路上，四周梅树环抱，虽然还没到开花的日子，
但已能感觉到梅花的淡淡清香了，你顿觉精神百倍。
LONG
	);
	set("outdoors", "meizhuang");
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xingren" : 2,
]));
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"xiaolu3",
  "east" : __DIR__"xiaolu1",
]));

	setup();
	replace_program(ROOM);
}
