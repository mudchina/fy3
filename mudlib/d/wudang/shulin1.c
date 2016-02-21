// Room: /d/wudang/shulin1.c

inherit ROOM;

void create()
{
	set("short", "树林");
	set("long", @LONG
四周青山环抱，风景秀丽异常。路边不时跳出些小兔子，瞪着红红的小眼好
奇的看着你。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"shulin2",
  "northup" : __DIR__"shijie",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
