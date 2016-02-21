// Room: bianj019.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "ÓùÉÍÐù");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "south"  : __DIR__"bianj017",
       ]));
	setup();
       replace_program(ROOM);
}
