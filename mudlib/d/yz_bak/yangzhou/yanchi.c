
//Mr.music  yangzhou's 砚池山庄

inherit ROOM;

void create()
{
        set("short", "砚池山庄");
        set("long", @LONG
	砚池山庄旧名荷花山庄，大概是因为每年夏季，庄内荷花
满池的原故吧。原先这里是扬州大盐商何永贵的私宅，后因盐业没
落，易主多次后被当代文豪，“扬州八怪”之首的--郑板桥所得。
因就池挥毫洗墨，故题名曰“砚池山庄”。庄中翠竹掩映，碧水荡
漾，文人墨客常畅谈于此，乐而忘返。向西是一片青竹林。

LONG
        );

        set("exits", ([
                "north" : __DIR__"yz-x2",
                "west" : __DIR__"zhulin",
        ]));

        set("item_desc", ([
                       "竹林" : "看着这片青竹林，你好象想到了些什么\n" , 
                          ]));
        
        set("objects", ([
                __DIR__"npc/mentu": 1,
        ]));

        setup();
}





