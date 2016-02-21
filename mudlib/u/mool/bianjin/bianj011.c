// Room: bianj011.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "ÎäµÂ·»");
	set("long",@LONG
--ÎäÆ÷,·À¾ßµê--
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "east"  : __DIR__"bianj010",
            "north"  : __DIR__"bianj012",
       ]));
	setup();
       replace_program(ROOM);
}
