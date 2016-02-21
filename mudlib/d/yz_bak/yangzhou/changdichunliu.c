
//Mr.music  yangzhou's 长堤春柳

inherit ROOM;

void create()
{
        set("short", "长堤春柳");
        set("long", @LONG
	你走在湖边的长堤上，湖水澄碧，堤畔三步一桃，五步一柳，
相间成行，柳绿桃红，“天地无私，春光秋月尽我流连”，使你仿佛
置身于世外桃园之中。向北是四桥烟雨，向南是山庄大门。堤岸有一
小亭，供稍事小憩。

LONG
        );

        set("exits", ([
                "north" : __DIR__"siqiaoyanyu",
                "south" : __DIR__"shouxihu",
                "east"  : __DIR__"jieshuiting",
        ]));

        set("item_desc", ([
                       "瘦西湖" : "就是瘦了一点的西湖。湖上漂着一叶小舟\n" , 
                          ]));
        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





