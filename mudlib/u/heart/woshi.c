#include <ansi.h>;

inherit ROOM;

void create()
{
        set("short", "卧室");
        set("long", @LONG
和情缘阁相比。飞雨阁显得朴素多了。一进门右
边的墙上挂着一把宝剑，让人感觉好似有阵阵杀气。
显然萧飞雨是个练武之人。而案几上则供着上代柔情
谷谷主帮主的灵牌。使人不可思议。里面的卧室。除
了一张床和一张较小的梳妆台。什么也没有了。但却
不失大家小姐的风范。给人一种清新，干净的感觉。
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
  "down" : __DIR__"ceting",
]));
        set("sleep_room", 1);
        set("no_clean_up", 0);
        setup();
}

