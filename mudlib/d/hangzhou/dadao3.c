// Room: /d/hangzhou/dadao3.c

inherit ROOM;

void create()
{
	set("short", "武林大道");
	set("long", @LONG
一条横贯南北的大道.可容十马并驾齐驱.道旁遍植柳树.大道的北面
有一栋大园子.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"dadao2",
  "east" : __DIR__"liulang",
  "south" : __DIR__"wuyuan",
]));

	setup();
	replace_program(ROOM);
}
