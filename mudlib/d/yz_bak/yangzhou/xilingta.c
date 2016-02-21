
//Mr.music  yangzhou's 栖陵塔

inherit ROOM;

void create()
{
        set("short", "栖陵塔");
        set("long", @LONG
	你现在站在高耸入云的栖陵塔下，只见塔门紧闭，满地落叶。
你不禁纳闷：为何没有人来打扫呢？院里四下无人，只有临院飘来一
缕香烟，你打了个寒战，好象感觉到了些什么。

LONG
        );

        set("outdoors", "/d/yangzhou");
        set("exits", ([
                "west" : __DIR__"damingsi",
        ]));

        set("item_desc", ([
                       "栖陵塔" : "暗青色的石塔。\n" , 
                          ]));
        
        set("objects", ([
               __DIR__"npc/obj/zhuye": 1,
        ]));

        setup();
}





