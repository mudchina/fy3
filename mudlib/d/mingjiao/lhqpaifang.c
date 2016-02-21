inherit ROOM;

void create()
{
	set("short","烈火旗牌坊");
        set("long", @LONG
这里是昆仑山南麓的一片开阔地，四周山崖环抱，青木遮天，正对
路中的是一座大红牌坊。穿过牌坊，是一片红砖红瓦，遍插镶红团
龙旗，路边齐齐站立两排教众，整个山谷中好似烈焰蒸腾，红雾遍
野，实在是江湖中一般门派所没有的壮观景象。由此向东北折转，
大路直通锐金旗；三旗承犄角鼎立之势，以巩固明教外围。
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
                "northeast" : __DIR__"torjq1",
		"northwest" :__DIR__"tojmq1",
		"northup":__DIR__"lhqmen",
                "southdown" : __DIR__"shanlu4",
        ]));

        set("objects", ([
__DIR__"npc/weiyixiao":1,
        ]));
        set("no_clean_up", 0);
        setup();
}
int valid_leave(object me, string dir)
{
	string banghui;
	banghui=(string)me->query("banghui");

	if((!banghui || banghui!="明教") && dir=="northup" &&
                objectp(present("wei yixiao", environment(me))))
           return notify_fail("韦一笑喝道：你不是我教弟子，不得入内。\n");

        return ::valid_leave(me, dir);
}
