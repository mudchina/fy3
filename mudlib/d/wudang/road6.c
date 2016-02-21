// Room: /d/wudang/road1.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是条官道，青石铺成。往西走可以到达大理，东北方则是个路口。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west":"/d/dali/todali",
  "northeast":__DIR__"road5",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
