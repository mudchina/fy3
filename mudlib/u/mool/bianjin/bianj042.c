// Room: bianj042.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "ãê¾©Î÷´ó½Ö");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "west"  : __DIR__"bianj043",
            "east"  : __DIR__"bianj020",
            "south"  : __DIR__"bianj022",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
