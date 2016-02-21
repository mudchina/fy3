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
  "south" : __DIR__"xiaolu2",
  "north" : __DIR__"road",
]));
set("outdoors","/d/emei");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
