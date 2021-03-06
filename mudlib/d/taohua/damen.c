#include <room.h>
#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "桃花山庄正门");
        set("long",@LONG
这里是桃花山庄的正门。门前疏落有致地种了几株桃花树，更显
得此地主人对桃花的偏爱。门口站着两个小童看守大门。看来由于地
处边远，人烟罕至，人们对山庄的防卫不是特别谨慎。门前有一对白
雕.
LONG);
        set("outdoors", "taohua");
        set("exits", ([
                "south" : __DIR__"qianyuan",
                "north" : __DIR__"tingzi",
                "east"  : __DIR__"road1" ,       
        ]));
        
        set("objects", ([
                __DIR__"npc/shitong" : 2,
                __DIR__"npc/lu" : 1,
        ]));
        set( "GATE_ROOM",1 );
        set( "gate_dir",(["north" : __DIR__"tingzi"]) );
        set( "close_look",@LONG
天色以晚山庄大门已经关上了，明天请早吧您哪！。
LONG
);

        set( "gate_name","桃花山庄正门" );

        set("outdoors", "taohua");
        setup();
}

