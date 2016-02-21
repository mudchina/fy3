// Room: /d/wudang/road1.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是条官道，青石铺成。西面不远处便是成都府，西南方通往大理，往
东则通往武当、江南各地。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" :__DIR__"road1",
  "west": __DIR__"road3",
  "southwest" : __DIR__"road4",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
