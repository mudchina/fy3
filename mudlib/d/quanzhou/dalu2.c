// Room: /d/quanzhou/dalu2.c

inherit ROOM;

void create()
{
	set("short", "大路");
	set("long", @LONG
一条笔直宽阔的大路,路边是茂密的树林,偶而能听到林中山泉流过
的声音,路上不时有装满货物的车辆飞驰而过.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dalu3",
  "west" : __DIR__"dalu1",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xingren.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
