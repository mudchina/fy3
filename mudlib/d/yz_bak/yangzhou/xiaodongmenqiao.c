// Mr.music  yangzhou's 小东门桥

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "小东门桥");
        set("long", @LONG
	这里是扬州城东的一座小桥，桥下就是举世闻名的“大运河”，
是扬州城历代繁华的命脉。桥下流水清清，两岸傍水建了不少房屋和船
码头，河里来往大小船只连绵不断，一片繁容景象。

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
              __DIR__"npc/shangren" : 1,
        ]));

        set("exits", ([
              "west" : __DIR__"dongguan4",
              "east" : __DIR__"jiedao3",
              "down" : __DIR__"yumatou",
                     ]));
        setup();
        replace_program(ROOM);
}

