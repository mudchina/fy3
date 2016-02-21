// bye enter 

inherit ROOM;

void create()
{
        set("short", "陆羽茶馆");
        set("long", @LONG
这里是成都最有名的茶楼,成都的达官显贵非常喜欢来的
一个地方。因为这里环境舒适,而且往来的都是有身份有名气
的人,在这里你可以一边品茶,一边同高雅之士高谈阔论.一楼
是一般有钱人喝茶的地方,二楼才是那些真正有身份有文化的
雅士饮茶的地方。
LONG
        );
        set("resource/water", 1);

        set("exits", ([
                "east" : __DIR__"chunxilu1",
                "up" : __DIR__"chaguan2",
        ]));

        set("objects", ([
__DIR__"npc/boss1":1,
        ]));

        setup();
        replace_program(ROOM);
}


