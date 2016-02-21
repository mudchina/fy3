// wen's workroom

inherit ROOM;

void create()
{
	set("short","测试屋一");
      set("long", @LONG
	测试的房间一。
LONG);
	set("exits", ([ /* sizeof() == 3 */
		"south":__DIR__"workroom.c",
		"north":__DIR__"testroom2.c",
	]));
	set("objects",([
		"/npc/test5":2,
	]));
      	setup();
	replace_program(ROOM);
}
