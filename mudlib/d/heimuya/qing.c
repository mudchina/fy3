//ROM dating
inherit ROOM;
void create()
{
        set("short", "青龙堂大厅");
        set("long", @LONG
这是『日月神教』下第三大堂：青龙堂的大厅。堂主贾布，据说武
功深藏不露，东面是令牌室，北边是条长长的走廊。
LONG );
        set("exits", ([
            "north" : __DIR__"chlang2",
            "east" : __DIR__"tang",
        ]));
        set("objects",([
            __DIR__"npc/jiabu"   :1,
        ]));
        setup();
        replace_program(ROOM);
}
