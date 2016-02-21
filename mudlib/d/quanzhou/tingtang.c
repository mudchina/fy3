// Room: /d/quanzhou/tingtang.c

inherit ROOM;

void create()
{
	set("short", "大厅");
	set("long", @LONG
市舶司的大厅装饰得富丽堂皇,所有的檀木椅子都由黄金包角,此时
大厅上正开了一桌酒席,几个洋鬼子正趴在席上大吃大喝,还有个手中拿
着个酒壶,已经躺倒在桌子底下.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"sibosi",
]));
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/zhenghe.c" : 1,
  __DIR__"obj/table.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
