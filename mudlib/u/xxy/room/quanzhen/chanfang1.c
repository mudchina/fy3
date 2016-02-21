// chanfang1.c 禅房


#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "禅房");
	set("long", @LONG
	这里是全真教弟子摆放兵器的禅房，地下杂乱地堆着一些剑，有的
已经锈纹斑斑了，有的还是锋利透亮，全真弟子练功的时候，就到这里来挑
选兵刃。
LONG
	);

	set("exits", ([
		"east" : __DIR__"chanfang2",
	]));

	set("objects", ([
		__DIR__"npc/obj/changjian" : random(3),
		__DIR__"npc/obj/gangjian" : random(2),
		__DIR__"npc/obj/tiejia" : random(1),
	]));

	setup();
	replace_program(ROOM);
}