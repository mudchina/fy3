// Room: /d/huanggon/majiu.c

inherit ROOM;

void create()
{
	set("short", "马厩");
	set("long", @LONG
马厩分成内外两部分,外面是片空场,以便遛马梳理,里面两排水槽边
拴了十多匹马,马厩角落中堆放着些青草,一边的几个铁皮桶里泡的是大
豆,墙上挂着几副鞍佩和马鞭.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wangfumafu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"tingyuan",
]));

	setup();
	replace_program(ROOM);
}
