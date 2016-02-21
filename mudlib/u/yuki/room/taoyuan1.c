// Room: /u/yuki/room/taoyuan1.c

inherit ROOM;

void create()
{
	set("short", "小筑");
	set("long", @LONG
这就是神秘少女的卧室。只是朴素的很多。右边的墙上挂着
一把宝剑，让人感觉好似有阵阵杀气。显然这个少女是个练武之
人。而案几上则供着上代梅庄庄主的灵牌。使人不可思议。里面
的卧室。除了一张床和一张较小的梳妆台。什么也没有了。但却
不失大家小姐的风范。给人一种清新，干净的感觉。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"taoyuan",
]));

	setup();
	replace_program(ROOM);
}
