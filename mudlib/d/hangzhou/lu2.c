// Room: /d/hangzhou/lu2.c

inherit ROOM;

void create()
{
	set("short", "大路");
	set("long", @LONG
一条尘土飞扬的大路,向西是个三叉路口,向东走就是杭州.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"lu3",
  "east" : __DIR__"lu1",
]));

	setup();
	replace_program(ROOM);
}
