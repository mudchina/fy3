// Room: bianj039.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "°ü¹«ìô");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "south"  : __DIR__"bianj038",
       ]));
	setup();
       replace_program(ROOM);
}
