//Mr.music yangzhou 赌场南风厅

inherit ROOM;

void create()
{
        set("short", "赌场南风厅");
        set("long", @LONG
	这是个热火朝天的大赌场，场里笑声哭声叫骂声乱成一团，不论
是大亨还是小贩，休暇时间总来碰碰运气。这里是南风厅。

LONG
        );

        set("exits", ([ 
                      "north" : __DIR__"duchang",
                     ]));
        set("objects", ([
                __DIR__"npc/duchangxiaoer": 1 ,
        ]) );

        setup();
}

