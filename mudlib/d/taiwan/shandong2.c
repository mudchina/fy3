// Room: /d/taiwan/shandong2.c

inherit ROOM;

void create()
{
	set("short", "山洞");
	set("long", @LONG
这是一条通向山中的隧道,两边的石壁上相隔不多远就有一颗夜明珠
发出光明,照射着这地方有些阴森恐怖.前面不远似乎有些什么东西.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dizi.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"shandong1",
  "northdown" : __DIR__"boss",
]));

	setup();
	replace_program(ROOM);
}
