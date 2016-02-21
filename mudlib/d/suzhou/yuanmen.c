// Room: /d/suzhou/yuanmen.c

inherit ROOM;

void create()
{
	set("short", "园门");
	set("long", @LONG
你来到园门前，“别有洞天”四个字映入你的眼睑，字迹甚是雄劲，显是出
于名家之手。园门两侧松树挺拔花草骄艳，颇具灵气，也不知是什么原因。这时
你似乎感觉到空气中有股淡淡的清香，精神不由得一振。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"east" :__DIR__"huqiushanyao",
		"enter" :__DIR__"jianchiquan",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
