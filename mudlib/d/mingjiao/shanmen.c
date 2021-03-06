// Room: /d/mingjiao/shanmen.c
// Date: XXL 97/04/3

#include <room.h>
inherit ROOM;

void create()
{
    set("short", "明教山门");
    set("long", @LONG
一个巨大的天然石桥横跨在两片山壁之间，石桥正上方龙盘
凤舞刻着两个大字：『明教』。字迹有些剥落，看上去年代久远。
两位三十来岁的大汉手持钢剑守在山门两侧。
LONG
    );

    set("exits", ([
        "westup" : __DIR__"shanlu1",
        "east" : __DIR__"tomen1",
    ]));

    set("valid_startroom","1");    
    set("outdoors", "mingjiao");
    set("objects",([
        __DIR__"npc/menwei1" : 2,
//	__DIR__"npc/jieyinshi":1,
        __DIR__"npc/chengchaofeng":1,
    ]));
    setup();
//    replace_program(ROOM);
}

int valid_leave(object me, string dir)
{
	string bh;
	object npc;

	bh=(string)me->query("banghui");
	npc=present("da han",this_object());

	if( bh && bh!="明教" && dir=="westup" && objectp(npc))
	return notify_fail("大汉伸手拦住你道：本教教规严厉，非本教弟子不得入内！\n");
    return ::valid_leave(me, dir);
}
