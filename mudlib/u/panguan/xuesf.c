//make by temp
//ROOM: xuesf.c


inherit ROOM;

void create()
{
        set("short", "白窟湖");
        set("long",@LONG
哦，你惊讶的看着前方，原来那里有一个湖泊，看起来并不大
不过湖水清澈，一定是从山上流下来的雪水囤积的，不过看起来湖
水没有别的水道，而湖水却一直这么多，哪这源源不断的雪水流到
哪去了？
LONG
        );
        set("exits", ([
                "northeast" : __DIR__"xuedi1",
                "eastup" : __DIR__"miling1"
        ]));
        setup();
        replace_program(ROOM);
}
