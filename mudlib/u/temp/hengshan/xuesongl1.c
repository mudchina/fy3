//make by temp
//ROOM: xuesongl1.c

inherit ROOM;

void create()
{
        set("short", "雪松林");
        set("long",@LONG
好一片茂密是森林，在这里连阳光都不能透进来，所有的树枝都
被积雪覆盖了，你仔细的向左右观望，不过到处都一样，白茫茫的一
片也许你迷路了。
LONG
        );
        set("exits", ([
                "west" : __DIR__"xuesongl2"
        ]));
        setup();
        replace_program(ROOM);
}
