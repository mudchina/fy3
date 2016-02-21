// Room: /d/yeyangzai/caocong.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "草丛");
	set("long", @LONG
四周是半人多高的杂草丛，你走在其中分不清东南西北，只好碰碰运气
了。
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
	"east":__DIR__"nroad",
	"west":__DIR__"nroad",
	"south":__DIR__"nroad",
	"north":__DIR__"nroad",
]));
	set("outdoors", "野羊寨");
	set("no_clean_up", 0);

	setup();
}

int valid_leave(object me,string dir)
{
	if((int)me->query_temp("have_gone")>=6)	{
		write(HIC"你终于走出了杂草丛！\n"NOR);
		me->delete_temp("have_gone");
		return 1;
	}
	if(! intp(me->query_temp("have_gone")))
		me->set_temp("have_gone",0);
	me->add_temp("have_gone",1);
	me->add("kee",-10);me->add("gin",-10);me->add("sen",-10);
	return notify_fail(HIR"走着走着，突然被什么东西刺了一下！\n"NOR);
}
