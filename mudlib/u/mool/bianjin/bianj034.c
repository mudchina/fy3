// Room: bianj034.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "钟亭");
	set("long",@LONG
--内悬铜钟--高.4 米.重万斤.
LONG
);
       set("exits", ([ /* sizeof() == 1 */
            "east"  : __DIR__"bianj033",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
