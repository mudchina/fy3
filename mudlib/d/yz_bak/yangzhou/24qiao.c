
//Mr.music  yangzhou's 二十四桥

inherit ROOM;

void create()
{
        set("short", "二十四桥");
        set("long", @LONG
	“二十四桥明月夜，玉人何处教吹萧”
	二十四桥又名红药桥，旧日曾集二十四美人于此，故得名。
桥头石刻“烟花夜月”，不知是谁的书笔。桥西有一酒肆，匾曰：
“听萧园”。向北就是大明寺，远远就可见寺院的栖陵塔了。

LONG
        );

        set("exits", ([
                "north"     : __DIR__"huangye6",
                "west"    :  __DIR__"tingxiaoyuan",
                "south"   : __DIR__"siqiaoyanyu",
        ]));

        set("item_desc", ([
                       "栖陵塔" : "暗青色的一座高塔，庄重且威严。" , 
                          ]));
        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





