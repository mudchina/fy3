// Room: /d/wudang/road1.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是条官道，青石铺成。继续往西南走可以到达大理。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northeast":__DIR__"road2",
  "southwest":__DIR__"road5",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
