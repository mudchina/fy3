// Room: /d/suzhou/huangqiu1.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "荒丘");
	set("long", @LONG
这片荒丘地带处于两府交接之处，也不知到底归哪府管辖。正是官府势力的
空缺处。因而盗寇带窜至此处。这时树上的乌鸦“嘎嘎”叫了两声，你心中发毛，
不由的加快了步伐。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"huangqiu2",
  "eastdown" : __DIR__"guandao2",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
}
int valid_leave(object me, string dir)
{
	if(!userp(me)&&dir=="eastdown"&&me->query("home")==1) 	{
	tell_room(__DIR__"guandao2",RED"\n只听得土匪大声叫骂：下次再敢来，老子把你给剁成肉泥！！\n"NOR);
	return 0;
	}
	return 1;
}
