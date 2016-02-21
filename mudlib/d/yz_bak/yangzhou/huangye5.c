//music  yangzhou's 荒野 5

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "荒野");
        set("long", @LONG
	四周是无边的荒野地，看不见人影，也听不到声音，象是到了另一
个世界。一阵空虚寂寞涌上心头，你不由的加快了步伐。

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "east" : __DIR__"yz-x1",
              "west" : __DIR__"huangye4",
                     ]));
 //       create_door("northwest", "竹门", "southeast", DOOR_CLOSED);
        setup();
        replace_program(ROOM);
}

