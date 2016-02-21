// Room: bianj002.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "ãê¾©±±´ó½Ö");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "north"  : __DIR__"bianj001",
            "south"  : __DIR__"bianj003",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
