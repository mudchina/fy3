// Room: /d/suzhou/dalu1.c

inherit ROOM;

void create()
{
	set("short", "官道");
	set("long", @LONG
这是条连接中州与苏州的官道。由于此处靠近苏州，所以来往行人不绝。游
玩的客人、卖力的青年、叫卖的小贩。人声嘈杂、喧闹不已。道路两旁的杨柳随
风摇摆不定。东面通往苏州，西南则往中州。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"southwest" :__DIR__"guandao2",
		"east" :__DIR__"qingshiru1",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
