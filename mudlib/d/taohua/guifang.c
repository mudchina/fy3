#include <room.h>
inherit ROOM;

void create()
{
    set("short", "闺房");
        set("long", @LONG
走进这里一阵清香，扑鼻而来。屋里摆设似是女儿家的物品
。轻萝丝帐，粉装玉雕。看来这里是东邪宝贝女儿的卧房了。为
了避嫌女儿家的闺房男人还是早早离开为妙。
LONG
        );
    set("exits", ([
     "north" :__DIR__"houyuan",
     
]));
        set("objects", ([
                __DIR__"npc/rong" : 1,
        ]));



        setup();
        replace_program(ROOM);
}

