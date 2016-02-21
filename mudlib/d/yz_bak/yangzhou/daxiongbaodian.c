
//Mr.music  yangzhou's 大雄宝殿

inherit ROOM;

void create()
{
        set("short", "大雄宝殿");
        set("long", @LONG
	这里是雄伟庄严的大雄宝殿，两边是青面撩牙的四大金刚，中间供奉着
如来佛祖的金像，殿内香烟缭绕，无数善男信女来此烧香磕头，正中是一块蒲团
，供香客礼拜。右手是善缘箱，供钱财布施用。殿后有一小门，通往禅房。

LONG
        );


//        set("no_fight","1");
        set("no_magic",1);
        set("valid_startroom", 1);
        set("exits", ([
                "south" : __DIR__"damingsi",
                "north" : __DIR__"chanfang",
        ]));

        set("item_desc", ([
                       "善缘箱" : "供箱客投钱用。\n" , 
                       "蒲团"   : "一块很精制的蒲垫。\n",
                       "如来佛祖" : "无所从来，亦无所去，是谓如来。",
                           ]));

        set("objects", ([
                __DIR__"npc/zhuchi": 1,
                __DIR__"npc/zhikeseng": 1,
                __DIR__"npc/obj/shanyuanxiang": 1,
               __DIR__"npc/obj/putuan" : 1,
        ]));

        setup();
}


