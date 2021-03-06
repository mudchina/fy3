// Room: /d/hangzhou/dalu2.c

inherit ROOM;

void create()
{
	set("short", "大路");
	set("long", @LONG
一条宽阔的大道,来往的人络绎不绝,由此向北可以到达浙东名山－
雁荡。南边的一条小路两边种满了梅花，尽头就是杭州梅庄。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"dalu3",
  "northeast" : "/d/yandang/jiedao1",
  "west" : __DIR__"dalu.c",
]));
	set("outdoors", "/d/hangzhou");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chungu.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
