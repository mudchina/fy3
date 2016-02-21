//music  yangzhou's 街道 2

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "街道");
        set("long", @LONG
	你走在扬州城的一条小街上，因地临荒郊，所以很少有人
来往，商店和人家也稀稀落落。偶尔有人经过，也是行色匆匆。向
北就到扬州的西北城郊了。向南通往扬州城的西城区。东边有一家
不大的裁缝店，看来生意倒是很红火。

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
        //      __DIR__"obj/box" : 1,
        ]));

        set("exits", ([
                        "north" : __DIR__"jiedao1",
                        "south" : __DIR__"yz-x2",
                        "east"  : __DIR__"caifengdian" ,
                     ]));
        setup();
        replace_program(ROOM);
}

