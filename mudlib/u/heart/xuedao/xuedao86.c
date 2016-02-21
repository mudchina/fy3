// Room: /u/uuui/xuedao/xuedao86.c

inherit ROOM;

void create()
{
	set("short", "杂树林");
	set("long", @LONG
这里是一片歪歪斜斜的小树林，树都不高，看起来
每棵树都是一副营养不良的样子。树叶有黄有绿，上面
都是虫子咬过的棕色斑痕。细细的树杆倒是很密集，你
拨开树丛艰难的向前走去。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"xuedao87",
  "east" : __DIR__"xuedao91",
  "west" : __DIR__"xuedao85",
]));

	setup();
	replace_program(ROOM);
}
