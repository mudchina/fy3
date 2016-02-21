// Room: bianj035.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "´óĞÛ±¦µî");
	set("long",@LONG
ÈıÊÀ·ğ.È¼µÆ·ğ,ÊÍ¼ÓÄ²Äá·ğ,ÃÖÀÕ·ğ.
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "north"  : __DIR__"bianj036",
            "south"  : __DIR__"bianj033",
       ]));
	setup();
       replace_program(ROOM);
}
