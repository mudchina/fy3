//room: /d/mingjiao/dadian.c
inherit ROOM;

void init();

void create()
{
        set("short","明教大殿");
        set("long", @LONG
走进这里，突感一阵肃穆之意，大殿中十分空旷，殿顶高悬八盏
金灯，两旁是精壮佩剑武士剑气森严逼人。正中设一宝座，前有一雕
花檀木案，案头供明教玄铁令(ling)六枚。宝座后立有一扇玉屏，屏
中所画正是明教圣火图，烈焰直逼日月。宝座上端坐一人，着布衣而
显高贵，含笑不怒而自威，正是明教教主张无忌。
LONG
           );
set("valid_startroom",1);
        set("exits",([
           "west": __DIR__"tonglu1",
           "east" : __DIR__"liangongfang",
            "north":__DIR__"huayuan",
            "south" : __DIR__"qiandian",
           ]));
        set_temp("tieling",8);
        set("objects",([
//			__DIR__"npc/wushi":12,
			__DIR__"npc/zhangwuji":1,
                        __DIR__"npc/yintianzheng":1,
                        __DIR__"npc/xiexun":1,
                        ]));
        setup();
	"/obj/board/mingjiao_b"->foo();
}
