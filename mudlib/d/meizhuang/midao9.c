// Room: /d/suzhou/meizhuang/midao9.c

inherit ROOM;

void create()
{
	set("short", "密道");
	set("long", @LONG
密道内阴暗异常，隔老远才有一盏油灯。此处道路极窄，必须弓身而
行，越向前行弯腰越低。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tiemen",
  "east" : __DIR__"midao8",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
