// Room: /d/kaifeng/chufang.c

inherit ROOM;

void create()
{
	set("short", "素斋厅");
	set("long", @LONG
这是寺庙中的大小僧人用餐的地方，当然方丈的素斋是专门有人送过
去的，平时相国寺的僧人听钟吃饭，等他们吃完了，也经常把剩下的素
斋舍给穷人吃。逢塑望，十五也经常作些斋席请大施主，高官富贵们
品尝，所以素斋厨的僧人是最忙的。
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"chufang2",
  "west" : __DIR__"zhongyuan",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/liucaizhu.c" : 1,
  __DIR__"npc/kong.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
