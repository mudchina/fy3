// Room: bianj012.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "ÎäµÂ·»ÄÚÔº");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "south"  : __DIR__"bianj011",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
