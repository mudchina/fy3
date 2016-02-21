// Room: /u/yuki/room/yaofang.c

inherit ROOM;

void create()
{
        set("short", "药房");
        set("long", @LONG
这里是梅庄专门为弟子准备的药房，一进来一股浓烈的药香扑鼻
而来。屋子里面四处摆的到处是竹架子，架子上放满了正在晾晒的各
种草药，靠门不远处摆着个大大的柜子，数百个小格子里面分别放着
金疮药等草药。一个小师弟正在忙碌的翻动晾晒好的草药。
LONG
        );
        set("shout", "药房");
        set("exits", ([ /* sizeof() == 1 */
  "south" : "/d/meizhuang/shibanlu3",
]));
        set("objects", ([
                "/u/yuki/npc/yaofangdizi" : 1,
        ]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}
