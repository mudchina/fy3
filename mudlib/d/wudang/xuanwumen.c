// Room: /d/wudang/xuanwumen.c

inherit ROOM;

void create()
{
	set("short", "太子坡");
	set("long", @LONG
	在你的面前是一座高大的石坊，上面写着“玄武门”三个镏金大字，由
于年代久远，久经日晒雨淋，已经显得有些黯淡。再往上是一间小吃店，此时已
有几个人在吃饭或休息，往下则是一条石阶路一直通到山下，西边是一座五层的
道观，却是油漆新鲜，显是刚建成不久。
LONG
	);
	set("outdoors", "wudang");
	set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"shijie",
  "northup" : __DIR__"xiaochidian",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/daotong" : 2,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
