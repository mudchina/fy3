// tyroad7.c 崎岖山路
// by Marz

inherit ROOM;

void create()
{
        set("short", "虎头岩");
        set("long", @LONG
        你走在虎头岩山路上，一边是峭壁，一边是悬崖。高高的天柱峰笼罩在
云雾中，隐约可见。可是身旁的进香客和游人都仔细地町着自己的脚下，不敢抬
头望一眼，惟恐一不小心摔下去。更有强人趁机打劫，行人无不噤声闭气，只求
快点敢路。
LONG
        );
        set("outdoors", "wudang");

        set("exits", ([
                "north" : __DIR__"chaotian",
                "southdown" : __DIR__"wulao",
                "west":__DIR__"maofang",
        ]));
}

