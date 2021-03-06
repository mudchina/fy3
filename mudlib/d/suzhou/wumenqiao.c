// Room: /d/suzhou/wumenqiao.c

inherit ROOM;

void create()
{
	set("short", "吴门桥");
	set("long", @LONG
此桥座落于盘门侧畔的运河之上，长若垂虹巍峨壮阔。乃苏州最大的单孔石拱
桥。此桥建于北宋年间，因这里地处水陆要冲有吴中门户之意，故而称其为吴门桥
。你抬阶登上桥顶，盘门城楼历历在目、瑞光古塔悄然而立、运河之中百舸争流，
一片繁忙景象。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"dadao1",
		"northwest" :__DIR__"panmen",
		"down" :__DIR__"matou",
]));
	set("outdoors","suzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
