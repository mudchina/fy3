// Room: bianj015.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "��¥�˷�");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "west"  : __DIR__"bianj014",
       ]));
	setup();
       replace_program(ROOM);
}
