// Room: /d/suzhou/qongxiang.c

inherit ROOM;

void create()
{
	set("short", "琼香亭");
	set("long", @LONG
这是一座古色古香的小亭，正建于太湖之上。放眼四处，茫茫水色。微风习
习，淡淡水香。真是个观赏太湖，修养身心的好地方。你不禁感叹，同是天涯人
为何会有如此之差别。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south":__DIR__"ru8",
		"east" :__DIR__"wuxue",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
