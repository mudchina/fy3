// Room: /d/suzhou/canhe/miru1.c

inherit ROOM;

void create()
{
	set("short", "密道");
	set("long", @LONG
密道内阴暗异常，好在墙壁上油灯微弱的光线能让你分辨出大概的方向。密
道内除了水滴声，就剩自己的脚步声了。前方不远隐隐有丝光亮。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"northup" :__DIR__"miru1",
		"out"	  :__DIR__"miru3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
