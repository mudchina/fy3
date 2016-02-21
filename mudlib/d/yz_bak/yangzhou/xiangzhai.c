
//Mr.music  yangzhou's 竹叶香斋

inherit ROOM;

void create()
{
        set("short", "竹叶香斋");
        set("long", @LONG
	这座小楼就是扬州八怪之首，当代书画名家板桥先生的书房--
竹叶香斋，小楼依竹傍水，池水潺潺，竹香阵阵，你只想在这多呆上一
会儿。向北是一条竹林蹊径，向西就是荷花池了。

LONG
        );

//        set("no_fight","1");
//        set("no_magic",1);
        set("exits", ([
                "north" : __DIR__"zhulin",
                "west" : __DIR__"hehuachi",
        ]));

        set("item_desc", ([
                       "竹林" : "看着这片青竹林，你好象想到了些什么\n" , 
                          ]));
        
        set("objects", ([
                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}


int valid_leave(object me, string dir)
{
        me->set_temp("mark/郑", 0);
        return 1;
}



