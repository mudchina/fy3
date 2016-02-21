// Room: /d/quanzhen/houhuayuan.c

inherit ROOM;

void create()
{
	set("short", "后花园");
	set("long", @LONG
	这里是一个小花园，杂乱地种着各种花草，看来无人打理，杂
草已经长得很高了。有一些红的，白的鲜花夹杂在草丛中，阵阵花香不
断地飘过。东面有一道小门，南面是一座两层小楼。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "northwest" : __DIR__"fu-houyuan",
  "east" : __DIR__"houhuayuan1",
  "south" : __DIR__"guanjinglou",
]));

	setup();
set("outdoors","/d/quanzhen");
	replace_program(ROOM);
}
