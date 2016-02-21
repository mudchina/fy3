//bye enter

inherit ROOM;

void create()
{
        set("short", "石室");
        set("long", @LONG
这里是个不大的石室，有个人盘坐在地上，旁边点了盏如豆
的油灯，借着这光线，你看见石壁上有几百幅用利器刻成的简陋
人形，每个人形均不相同，举手投足，似在练武。你挨次看去，
密密麻麻都是图形，心中甚为不解。
LONG
        );

        set("exits", ([
                "east" : __DIR__"jinshedong1",
        ]));
        set("objects", ([
                __DIR__"wenzai/npc/jinshe" : 1,
        ]));

        setup();
        replace_program(ROOM);
}


