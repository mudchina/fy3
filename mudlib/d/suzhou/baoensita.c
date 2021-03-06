// Room: /d/suzhou/baoensita.c

inherit ROOM;

void create()
{
	set("short", "报恩寺塔");
	set("long", @LONG
报恩寺塔又称北寺塔，素有江南第一塔之称，与城外的虎丘塔遥遥相对，已
成为苏州古城的标志。此塔高约八十米，乃苏州诸塔之冠。但见它重檐复宇，翼角
飞，端的是名冠江南。古诗中有“云外支硎寺，名声敌虎丘”之说。你抬头仰望，
心中赞叹不已。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"baoensi",
]));
	set("objects",([
	__DIR__"npc/xiaoshami" :1,
	__DIR__"npc/xiaoheshang" :1,
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
