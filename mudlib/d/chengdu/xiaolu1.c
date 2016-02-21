//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "小路");
        set("long", @LONG
你来到了鄂川交界的小路上，偶尔会有人骑着马匆
匆而过，卷起飞扬的尘土。东北边通向扬州城，往西则
进入四川的大道。
LONG
        );

        set("exits", ([
                "west" : __DIR__"xiaolu2",
                "northeast" : "/d/city/xxroad1",
        ]));

        set("outdoors", "chengdu");
        setup();
        replace_program(ROOM);
}


