//make by temp
//ROOM: miling4.c
//99

inherit ROOM;

void create()
{
        set("short", "密林");
        set("long",@LONG
好一片茂密是森林，在这里连阳光都不能透进来，你仔细的向东
边的山脚观望，那里似乎有一片雪地。
LONG
        );
        set("exits", ([
                "eastup" : __DIR__"xuedi1",
                "westdown" : __DIR__"sanlu2",
                "northup" : __DIR__"miling3"
        ]));
        setup();
        replace_program(ROOM);
}
