//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "珠宝店");
        set("long", @LONG
这里光线暗淡，工作台前一位老人在一盏油灯下伏案
工作，他就是谢长风。
LONG
        );

        set("exits", ([
                "east" : __DIR__"zhubaodian",                
        ]));
        set("objects",([
                __DIR__"npc/xie" : 1,
        ]));
             
               
        setup();
        replace_program(ROOM);
}

 
