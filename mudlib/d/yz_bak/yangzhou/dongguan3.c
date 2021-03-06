// Mr.music  yangzhou's 东关街 3

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "东关街");
        set("long", @LONG
	你走在扬州城最繁华的大街上，沿街店铺林立，商贾成群。白天
这里车马如龙，人声鼎沸，夜里是星光伴月，灯火通明。这里是城中的主
要的商业和文化娱乐街，素有“春风十里扬州路”的美称。路边有一个向
下的台阶，下边不时传来阵阵狂笑。

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("objects", ([
              __DIR__"npc/liumang" : 1,
        ]));

        set("exits", ([
              "west" : __DIR__"dongguan2",
              "east" : __DIR__"shizhongxin",
              "down" : __DIR__"duchang",
                     ]));
 //       create_door("northwest", "竹门", "southeast", DOOR_CLOSED);
        setup();
        replace_program(ROOM);
}

