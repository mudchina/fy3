// Room: /d/suzhou/meizhuang/midao1.c

inherit ROOM;

void create()
{
	set("short", "密道");
	set("long", @LONG
密道内阴暗异常，只有墙壁上点着一盏油灯，发出淡黄色光芒。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"neishi",
  "down" : __DIR__"midao2",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
