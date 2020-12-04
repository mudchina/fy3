// Room: /d/taiwan/matou.c

inherit ROOM;

void create()
{
	set("short", "码头");
	set("long", @LONG
一个小小的码头,用粗大的木料制成的浮桥直伸向海边,几艘小帆船停 
靠在旁边,几个水手正忙着起锚. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/taiwan");
	set("exits", ([ /* sizeof() == 2 */
  "in" : __DIR__"chuan",
  "south" : __DIR__"road",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/worker.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
