// Room: /d/hengshan/baiyunan.c
#include <room.h>
inherit ROOM;
void create()
{
        set("short", "白云庵");
        set("long", @LONG
这里就是恒山派掌门人的居所。庵内供奉白衣观世音，除地上
一个蒲团，四壁萧然。恒山派威震江湖，没想到主庵居然简朴一至
如斯。
LONG);
set("valid_startroom",1);
        set("exits", ([ /* sizeof() == 4 */
           "south"  : __DIR__"square",
        ]));
	set("objects", ([
		__DIR__"npc/xian" : 1,
		__DIR__"npc/zheng" : 1,
		__DIR__"npc/qin" : 1,
	]));
//      set("no_clean_up", 0);
        setup();
"/obj/board/hengshan_board"->foo();
        replace_program(ROOM);
}

