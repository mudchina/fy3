//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "天府广场");
        set("long", @LONG
这里是成都的中心，占地约三亩，绿色的草坪就象一块大
的地毯，东西各有一棵老榕树，已有上百岁了，看看它们，就
知道成都的历史是相当悠久的。这里来往的人很多，熙熙攘攘，
摩肩接踵，有游客、卖艺人、闲人、小贩、商人，吵闹和吆喝
声不绝于耳，好一派热闹繁华的景象。
LONG
        );

        set("exits", ([
                "north" : __DIR__"beijie2",
                "south" : __DIR__"nanjie1",
                "west" : __DIR__"xijie2",
                "east" : __DIR__"dongjie1",                
        ]));
        set("outdoors","chengdu");
        set("objects",([
                  __DIR__"npc/xiaolanyan" : 3,
                  __DIR__"npc/laolanyan" : 1,
           ]));
      
        setup();
        replace_program(ROOM);
}

 
