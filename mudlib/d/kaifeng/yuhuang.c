// Room: /d/kaifeng/yuhuang.c

inherit ROOM;

void create()
{
	set("short", "玉皇阁");
	set("long", @LONG
玉皇阁高13米，坐北朝南，采用仿木结构均用砖砌成。外观下阁上
亭。下圆下方，造型奇特，是一座集蒙古包与阁楼巧妙结合，具有元代
风格的建筑.阁内供有真武铜像一尊.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"sanqing",
  "up" : __DIR__"yuhuang2",
]));

	setup();
	replace_program(ROOM);
}
