
//Mr.music  yangzhou's 仙人旧馆

inherit ROOM;

void create()
{
        set("short", "仙人旧馆");
        set("long", @LONG
	仙人旧馆又称平山堂，堂前筑石栏，凭栏远眺，江南诸山
就似拱揖堂前。联题“晓起凭栏，六代青山都在眼  晚来对酒，二
分明月正当头”。堂下一清泉，题云：天下第五泉。

LONG
        );

        set("exits", ([
                "east"   : __DIR__"damingsi",
        ]));

        set("item_desc", ([
                       "泉" : "泉水甘美，不妨尝尝。" , 
                          ]));
        set("resource/water",1);        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





