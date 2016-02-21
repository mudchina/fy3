//Mr.music  yangzhou's 杂货铺

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "杂货铺");
        set("long", @LONG
	你正走在城南引市街的中段的小杂货铺，街上人声鼎沸，车马如龙。
不时有游方郎中，算命打卦的来回游荡。这里地生意通常不太好，但老板好象
并不在意。
LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
__DIR__"npc/lanjinglin":1,
        ]));

        set("exits", ([
              "west" : __DIR__"yingshijie2",
                     ]));
        setup();
        replace_program(ROOM);
}

