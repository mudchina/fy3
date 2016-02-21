// Room: bianj032.c
// mike.99.3.1
inherit ROOM;

void create()
{
	set("short", "相国寺大门");
	set("long",@LONG
庄严古朴的门楼上,相国寺三字嵌于门楼正中,依门而卧
的琉璃狮分列于大门左右,增添了古寺的气势.
-再加一些-
LONG
);
       set("exits", ([ /* sizeof() == 2 */
            "north"  : __DIR__"bianj033",
            "south"  : __DIR__"bianj031",
       ]));
       set("outdoors", "city");
	setup();
       replace_program(ROOM);
}
