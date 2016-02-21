// Room: /d/emei/xiaolu1.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
一条曲径幽深的小路，路边的竹林随风摇摆。北面通向峨嵋，往
南则是大理。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" :"/d/dali/toemei",
  "north":__DIR__"xiaolu1",
]));
	set("outdoors", "emei");
	set("no_clean_up", 0);
	set("objects",([
		"/npc/man4":1,
	]));

	setup();
	replace_program(ROOM);
}
