inherit ROOM;
 
void create()
{
        set("short", "圣姑堂");
        set("long",@LONG
自前任教主任我行失踪之后，现任教主东方不败就把此处划给任盈盈居住。
只见红毡铺地，明珠点缀，帐幔飘拂，侍女如云。一般人是不准许进入的。
LONG );
        set("exits", ([
            "east"   : __DIR__"chitang",
        ]));
        set("objects", ([
//		__DIR__"npc/ren" : 1,
		"/d/huashan/npc/ren-yingying":1,
            __DIR__"npc/shinu":2,
        ]));       
//        set("no_clean_up", 0);
        setup();
        replace_program(ROOM);
}
