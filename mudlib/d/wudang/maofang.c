// tyroad7.c 崎岖山路
// by Marz

inherit ROOM;

void create()
{
        set("short", "小茅房");
        set("long", @LONG
        这是供人休息的一间小屋。
LONG
        );
        set("outdoors", "wudang");

        set("exits", ([
                "east" : __DIR__"hutou",
        ]));
        set("objects", ([
                __DIR__"npc/guest2" : 3]));
        setup();
        replace_program(ROOM);
}
