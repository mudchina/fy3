// Room: bianj.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "ãê¾©¶«ÃÅ");
	set("long",@LONG
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "east"  : __DIR__"bianj066",
            "west"  : __DIR__"bianj061",
       ]));
       set("outdoors", "city");
	setup();
}
