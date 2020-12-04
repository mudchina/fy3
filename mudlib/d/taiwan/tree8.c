// Room: /d/taiwan/tree8.c

inherit ROOM;

void create()
{
	set("short", "风波林");
	set("long", @LONG
眼前的树林变得稀疏起来.脚下的小路伸向林外.看来你终于可以走
出这片树林了.回头再看,林中似乎有人影一闪.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"tree4",
  "north" : __DIR__"zhuanyuan",
]));
	set("outdoors", "/d/taiwan");

	setup();
	replace_program(ROOM);
}
