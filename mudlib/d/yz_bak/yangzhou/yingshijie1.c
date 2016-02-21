//Mr.music  yangzhou's 引市街 1

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "引市街");
        set("long", @LONG
	你走在扬州城的一条大街上，街上人声鼎沸，车马如龙。沿街边
满是各类的商家、店铺和小贩。这里南来北往的路人不断，还不时有游方
郎中，算命打卦的来回游荡。往南是引市街，往北就是城市的中心了。

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
              __DIR__"npc/tiaofu" : 2,
        ]));

        set("exits", ([
              "north" : __DIR__"shizhongxin",
              "south" : __DIR__"yingshijie2",
                     ]));
        setup();
        replace_program(ROOM);
}

