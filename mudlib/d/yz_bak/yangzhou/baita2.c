
//Mr.music  yangzhou's 白塔晴云 2

inherit ROOM;

void create()
{
        set("short", "白塔二层");
        set("long", @LONG
	你现在站在白塔二层的平台上，石壁刻着各个佛经故事，中央
供着佛的香台，以便善男信女顶礼膜拜。放眼四周，满是绿茵草地，一
条碧水横贯庄园，就是瘦西湖了。湖心隐约一亭，可能是钓鱼台了。微
风吹来，塔顶风铃随风摇摆，清脆的铃声在庄园中荡漾。

LONG
        );

        set("exits", ([
                "down"   : __DIR__"baita",
        ]));

        set("item_desc", ([
                       "瘦西湖" : "就是瘦了一点的西湖。湖上漂着一叶小舟\n" , 
                          ]));
        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





