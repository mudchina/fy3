// Room: /d/kaifeng/zhonglou.c

inherit ROOM;

void create()
{
	set("short", "钟楼");
	set("long", @LONG
一座小巧而高耸的阁楼，用上好的桧木所建，有股淡淡的清香。楼
上的铁钟净重一万八千斤，是当年相国寺高僧云游天下，布施而成的，
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"qianyuan",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
