//xiuxian
  

#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "休闲中心");
	set("long", @LONG
一进休闲中心的大厅，迎面看见足有一丈见方的一幅贵妃出浴图。地
上的地毯软绵绵的，你不竟想躺下休息一下。北面的门上写着女宾,向南
可以到男宾的大厅。有几个人披着浴袍直接往西面的屋内去了。
LONG
	);

	set("exits", ([
		 "east" : __DIR__"wendingnan3",
		"west" : __DIR__"fuwu",
		"north" : __DIR__"nubin",
		"south" : __DIR__"nanbin",
]));
	set("objects", ([
		__DIR__ "npc/datangfuli.c" :1,

]));
	setup();
       
}
int valid_leave(object me,string dir)
{
if((me->query("gender")=="男性"&&dir=="north")||(me->query("gender")=="女性"&&dir=="south"))
        return notify_fail("哎！看清楚再走！！\n");
        if(dir=="east")        return  ::valid_leave(me,dir);

	 if(dir=="west")    return  ::valid_leave(me,dir);      
if((me->query("gender")=="男性"&&dir=="south")||(me->query("gender")=="女性"&&dir=="north"))
	return ::valid_leave(me,dir);
}
