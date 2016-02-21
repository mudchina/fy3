//music  yangzhou's 荒野 7

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "荒野");
        set("long", @LONG
	四周是无边的荒野地，看不见人影，也听不到声音，象是到了另一
个世界。一阵空虚寂寞涌上心头，你不由的加快了步伐。向西远远望去是一
座暗青色的石塔，就是大明禅寺的栖陵塔了，向南通往扬州城。

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "west" : __DIR__"huangye8",
              "south" : __DIR__"huangye6",
                     ]));
        setup();
        replace_program(ROOM);
}

