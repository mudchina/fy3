//make by temp
//ROOM: wumingfd.c

inherit ROOM;

void create()
{
        set("short", "无名峰顶");
        set("long",@LONG
这就是峰顶了，你站在这遥望四周，绵绵的群山都在你脚下，真
有天下唯我独尊的感觉，你不禁央天长笑。
LONG
        );
        set("exits", ([
                "southdown" : __DIR__"xuesongl4",
        ]));
        setup();
        replace_program(ROOM);
}
