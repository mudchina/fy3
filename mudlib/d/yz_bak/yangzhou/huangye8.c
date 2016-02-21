//music  yangzhou's 荒野 8

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "荒野");
        set("long", @LONG
	四周是无边的荒野地，看不见人影，也听不到声音，象是到了另一
个世界。一阵空虚寂寞涌上心头，你不由的加快了步伐。前面是一座小山，
山上隐约传来禅院钟声。

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "up" : __DIR__"damingsi",
              "east" : __DIR__"huangye7",
                     ]));
        setup();
        replace_program(ROOM);
}

