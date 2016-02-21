
//Mr.music  yangzhou's 瘦西湖山庄

inherit ROOM;

void create()
{
        set("short", "瘦西湖山庄");
        set("long", @LONG
	“两岸花柳全依水，一路楼台直到山”
	这里就是以清秀典雅著称的瘦西湖山庄，庄内碧水绿草，亭台水榭，
白塔楼桥，歌舞相闻。联题“风月无边，到此胸怀何似  亭台依旧，羡他烟
水全收”，临水悬匾“中流自在”，由当代名家板桥先生手书。

LONG
        );

        set("exits", ([
                "north" : __DIR__"changdichunliu",
                "south" : __DIR__"jiedao4",
        ]));

        set("item_desc", ([
                       "瘦西湖" : "就是瘦了一点的西湖。湖上漂着一叶小舟\n" , 
                          ]));
        set("valid_startroom", 1);        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





