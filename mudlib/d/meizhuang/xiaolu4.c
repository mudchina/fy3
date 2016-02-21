// Room: /d/meizhuang/xiaolu4.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
你走在一条幽静的小路上，路旁花草茂盛红绿相间。由于行人渐少，
显得十分寂寞。西北面过去是个岔路口。
LONG
	);
	set("outdoors", "meizhuang");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : "/d/hangzhou/dalu3",
  "east" : __DIR__"xiaolu3",
]));

	setup();
	replace_program(ROOM);
}
