// Room: /d/suzhou/huangqiu2.c

inherit ROOM;

void create()
{
	set("short", "荒丘");
	set("long", @LONG
四周光秃秃一片，冷风吹过你鸡凛凛打了个冷战。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"huangqiu3",
  "east" : __DIR__"huangqiu1",
]));
	set("objects",([
		__DIR__"npc/tufei" :1,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
