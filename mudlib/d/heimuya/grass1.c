inherit ROOM;
 
void create()
{
        set("short", "草地");
        set("long",@LONG
你走在一片青翠的草地上,几滴露珠在草叶边缘滚动,南边的大厅就是
日月教风雷堂,东边青松翠柏间,是高拱的墓群,北面是片草地.
LONG );
        set("exits", ([
            "east"    : __DIR__"mudi",
            "south"    : __DIR__"fen0", 
            "north"    :__DIR__"grass2",
        ]));
        set("no_clean_up", 0);
        set("outdoors", "inn");    
        setup();
	replace_program(ROOM);
}
