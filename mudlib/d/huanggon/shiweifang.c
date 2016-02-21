// Room: /d/huanggon/shiweifang.c

inherit ROOM;

void create()
{
	set("short", "侍卫房");
	set("long", @LONG
侍卫房是御前侍卫的总部,也是他们交接班的地方,现任的总管是多
隆,据说武功十分高明.里面靠墙摆了十多张椅子,角落中放了些刀剑.
东边是内厅,西面是保和殿.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/zhangkangnian.c" : 1,
  __DIR__"npc/zhaoqixian.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"baohedian",
  "east" : __DIR__"shiweifang1",
]));

	setup();
	replace_program(ROOM);
}
