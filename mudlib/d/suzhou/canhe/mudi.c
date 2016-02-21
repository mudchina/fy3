// Room: /d/suzhou/canhe/mudi.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "墓地");
	set("long", @LONG
墓地四周长满了一人多高的杂草，你奋力拨开草丛来到墓旁。墓碑上的字
迹由于风吹雨林已看不真切，模模糊糊好象是慕容家的什么长辈。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"north" :__DIR__"huayuan",
]));
	set("outdoors","suzhou");
	set("objects",([
		__DIR__"npc/murongbo":1,
	]));

	setup();
        replace_program(ROOM);
}
