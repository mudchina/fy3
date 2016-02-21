// Room: /d/jinling/xiaolu-s.c

inherit ROOM;

void create()
{
	set("short", "林间小路");
	set("long", @LONG
这是一条蜿蜒于林间的小路，只能容三人并肩而过。应此不管谁到了这儿，
都要步行而入。不过这儿风景很好，幽静非常，漫步其中也是一种享受。
穿过眼前的林间小路就是尚秀芳的香居紫云楼了。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"xiaolu2.c",
  "east" : __DIR__"xiaolu-s.c",
  "south" : __DIR__"xiaolu-w.c",
]));
	set("outdoors", "/d/jingling");

	setup();
	replace_program(ROOM);
}
