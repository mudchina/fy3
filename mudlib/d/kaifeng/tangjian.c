// Room: /d/kaifeng/tangjian.c

inherit ROOM;

void create()
{
	set("short", "堂间");
	set("long", @LONG
一间四方的堂间，正中的供桌后还摆着尊残缺的佛像，由于缺了半个
脑袋，加上半身被蜘蛛网罩住了，也看不出原来的模样。一边的柱子旁
打了个地铺，靠墙摆着几个水罐。
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/oldseng.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"kongdi",
]));

	setup();
	replace_program(ROOM);
}
