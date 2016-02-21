
//Mr.music  yangzhou's 大明寺

inherit ROOM;

void create()
{
        set("short", "大明寺");
        set("long", @LONG
	这里是大明禅寺，寺门石壁刻着：淮东第一观。寺内香烟缭绕，
木鱼声声，寺内古朴典雅，庄严肃默。向西是仙人旧馆，向东就是“栖
陵塔”。正前方就是雄伟的“大雄宝殿”。

LONG
        );

        set("exits", ([
                "north"     : __DIR__"daxiongbaodian",
                "west"    :  __DIR__"xianrenjiuguan",
                "east"   : __DIR__"xilingta",
                "down"   : __DIR__"huangye8",
        ]));

        set("valid_startroom", 1);
        set("item_desc", ([
                       "栖陵塔" : "暗青色的一座高塔，庄重且威严。" , 
                          ]));
        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





