// Room: bianj040.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "ãê¾©ÄÏ´ó½Ö");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "northwest"  : __DIR__"bianj028",
            "south"  : __DIR__"bianj041",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
