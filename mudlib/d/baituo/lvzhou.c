// Room: /d/baituo/lvzhou.c

inherit ROOM;

void create()
{
	set("short", "绿洲");
	set("long", @LONG
这儿是沙漠中的一小块绿地，再往西走就要进入大漠了，你
最好先在这儿喝点水解下渴。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "baituo");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"shamo1",
  "east" : __DIR__"sl1",
]));

	setup();
	replace_program(ROOM);
}
