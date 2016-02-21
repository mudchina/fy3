// Room: /d/wudang/road1.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是条官道，青石铺成。东北方是个叉路口，分别通往武当与江南各地。
西边的叉路则通向成都与大理。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" :__DIR__"road2",
  "northeast" : __DIR__"shilu1",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
