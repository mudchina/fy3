// Room: /d/new/huanhua/xiaolu3.c

inherit ROOM;

void create()
{
	set("short", "小路");
	set("long", @LONG
花木中的一条小路,两边是层层的藤蔓和花草,在头顶交织而成一道平
滑的空中绿廊,向西去是大厅,东面不远有一间房传来叮叮当当的声音.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/baidu-mo.c" : 1,
]));
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xiaolu2",
  "north" : __DIR__"xiaoyuan",
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
