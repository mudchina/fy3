// Mr.music  yangzhou's 街道 3

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "街道");
        set("long", @LONG
	你走在扬州城东的一条小街上，向东就是扬州城的东门了。
因离城市中心较远，平日倒也清静。向西是大运河，过了小东门桥，
就是繁华的东关街了。向南是一个驿站。

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
              "south" : __DIR__"yizhan",
              "west" : __DIR__"xiaodongmenqiao",
              "east" : __DIR__"dongmen",
                     ]));
        setup();
        replace_program(ROOM);
}

