
//Mr.music  yangzhou's 仓库

inherit ROOM;

void create()
{
        set("short", "仓库");
        set("long", @LONG
	这是船员们临时堆放物品的仓库。室内昏暗无光，有点儿阴森
恐怖。你觉得还是快点离开的好。东面有个小门，里面黑黑的，不知放
些啥。

LONG
        );

        set("exits", ([
                "south" : __DIR__"yumatou",
        ]));

        set("objects", ([
                __DIR__"npc/chuanjia": 1,
        ]));

        setup();
}

 
