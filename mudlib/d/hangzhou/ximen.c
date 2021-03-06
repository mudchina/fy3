// Room: /d/hangzhou/ximen.c

inherit ROOM;

void create()
{
	set("short", "杭州西门");
	set("long", @LONG
杭州城的西门,守卫森严.对来往行人盘查甚严,高大的青砖城墙已有
些破落,从墙脚砖缝钻出各种野草,而出了西门就是一片平原.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dadao1",
  "west" : __DIR__"lu1.c",
]));
	set("outdoors", "/d/hangzhou");
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/shoubei.c" : 1,
  __DIR__"npc/bing.c" : 2,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
