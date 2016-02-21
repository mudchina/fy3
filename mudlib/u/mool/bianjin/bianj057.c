// Room: bianj057.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "ãê¾©Î÷ÃÅ");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "west"  : __DIR__"bianj057",
            "east"  : __DIR__"bianj045",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
