// Room: bianj065.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "ãê¾©ÍşÔ¶ïÚ¾ÖÕË·¿");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "out"  : __DIR__"bianj064",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
