//bye enter

#include <ansi.h>

inherit ROOM;

void create()
{
        set("short",HIY "春熙路" NOR);
        set("long", 
""HIW"你走在一条热闹的大道上，街上人群熙熙攘攘，可得当\n"
"心小偷哦。东面是个打铁铺子，西面有个钱庄，西南方有条\n"
"青石巷。"NOR"\n"
    );

        set("outdoors", "/d/chengdu");

        set("exits", ([
                "south" : __DIR__"chunxilu3",
                "north" : __DIR__"chunxilu1",
                "east" : __DIR__"cddtp",
                "west" : __DIR__"qianzhuang",
                "southwest" :__DIR__"qingshixiang1",
            ]));

        setup();
        replace_program(ROOM);       
}



