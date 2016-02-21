// Room: bianj59.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "γκΎ©Ά«΄σ½Φ");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 3 */
            "west"  : __DIR__"bianj058",
            "northeast"  : __DIR__"bianj061",
            "south"  : __DIR__"bianj060",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
