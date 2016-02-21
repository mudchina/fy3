// Room: bianj024.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "¿Í·¿");
	set("long",@LONG
-ÄÐ¿Í-
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "west"  : __DIR__"bianj023",
       ]));
	setup();
       replace_program(ROOM);
}
