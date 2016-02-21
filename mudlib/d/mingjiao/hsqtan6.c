// Room: /d/mingjiao/hsqtan6.c

inherit ROOM;

void create()
{
	set("short", "深潭");
	set("long", @LONG
这里的水只有齐腰深，但站在水中，仍感觉寒意从
脚下漫起，经久不散。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"tan",
  "west" : __DIR__"hsqtan5",
]));

	setup();
	replace_program(ROOM);
}
