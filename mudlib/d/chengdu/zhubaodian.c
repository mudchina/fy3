//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "珠宝店");
        set("long", @LONG
这里就是全国闻名的“谢瑞麟”珠宝店。谢家做珠宝这一
行已经有了上百年的历史，以其选材上乘，制作精巧，花样繁
多而为达官贵族所青睐，因为如果身上佩带有“谢瑞麟”珠宝
就是一种身份的象征。门口挂的招牌虽然有些旧了，却显示出
它历史的悠久。西面有一间小屋，是谢家第三十三代传人谢长
风平日工作的地方。
LONG
        );

        set("exits", ([
                "west" : __DIR__"workroom",
                "east" : __DIR__"beijie2",                
        ]));
        set("objects", ([
                __DIR__"npc/yunyan" : 1,
                __DIR__"npc/huoji" : 1,
        ]));
      
        setup();
        replace_program(ROOM);
}

 
