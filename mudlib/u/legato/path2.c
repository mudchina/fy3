#include <room.h>
inherit ROOM;

void create()
{
      set("short","幽径");
      set("long",@LONG
出了花园是一条小路静静的延伸着路面有上等的汉白玉
铺成两旁是茂盛的树阳光透过树叶之间的缝隙照射到路
面上风吹过,树叶摇动,路面上便跳跃着晶莹剔透如珍珠
般的光芒.
LONG);
      set("outdoors", "xx");
      set("exits",([ /* sizeof() == 2 */
          "east" :"/d/yandang/luoyan26",
          "west" : __DIR__"yueliangmen",
      ]));
      setup();
}

