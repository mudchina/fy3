//make by temp
//ROOM: miling2.c
//99.12.20
inherit ROOM;

void create()
{
        set("short", "密林");
        set("long",@LONG
好一片茂密是森林，在这里连阳光都不能透进来，你仔细的向左
右观望，不过到处都一样，也许你迷路了。
LONG
        );
        set("exits", ([
                "southdown" : __DIR__"sanlu2",
                "eastup" : __DIR__"miling3"
        ]));
        setup();
        replace_program(ROOM);
}
