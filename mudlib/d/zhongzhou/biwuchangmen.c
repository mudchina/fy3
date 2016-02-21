

inherit ROOM;

void create()
{
        set("short", "比武场大门");
        set("long", @LONG
站在这里宽敞的街道看的人不竟心情一畅。红漆碧瓦，高墙
廓院。一扇朱红大门，上书牌匾[中州武]. 这里是比武场的的所
在。回首向南望去一条大街东西惯列而去。
LONG
        );
set("outdoors","/d/zhongzhou");

        set("exits", ([
                 "south" : __DIR__"yanlingdong.c",
                 "north" : __DIR__"biwuchangyuan.c",
]));


        setup();
        replace_program(ROOM);
}


