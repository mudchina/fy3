//make by temp
//ROOM: xuedi2.c


inherit ROOM;

void create()
{
        set("short", "雪地");
        set("long",@LONG
这是一片被雪覆盖的平地，看起来这雪积的很深，不知道走下去，
能达到身体的哪，不过在这走一定会很费力的。
LONG
        );
        set("exits", ([
                "northup" : __DIR__"xuedi1"
        ]));
        setup();
        replace_program(ROOM);
}
