// Room: bianj030.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "œ„÷ÚµÍ");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "north"  : __DIR__"bianj029",
       ]));
	setup();
       replace_program(ROOM);
}
