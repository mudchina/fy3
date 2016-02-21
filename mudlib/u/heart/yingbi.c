// Room: /u/uuui/yingbi.c

inherit ROOM;

void create()
{
        set("short", "影壁");
        set("long", @LONG
其实门开了，外面也看不见里面的活动。因为凝王府
建造时按中国的传统习惯造了一个影壁。影壁由琉璃镶嵌
花卉鸟兽的图案，高高大大的把整个王府遮掩的结结实实
只有绕过影壁才会豁然开朗。有一个很大的庭院，三面厅
堂均由回廊连接，遇到雨雪天气。绕廊而行可到达每一个
厅堂。院中方砖铺就的十字甬道，将院子划为四块。四块
地带种有名贵树木。整个院落除去鸟叫显的安静又开阔。
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"xiaowu",
  "north" : __DIR__"huihong",
  "south" : __DIR__"damen",
]));
        set("no_clean_up", 0);

        setup();
        replace_program(ROOM);
}

