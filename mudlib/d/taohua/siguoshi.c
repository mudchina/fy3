inherit ROOM;

void create()
{
    set("short", "思过室");
    set("long", @LONG
这是桃花岛上供本门弟子闭门思过的地方。屋里仅仅放着一张
床，显得空荡荡的。四面则是光秃秃的墙壁，看上去黑黝黝的，原
来却是铁筑的。靠门的地方有一小洞，洞边放着一只碗。往东是一
间不起眼的小屋，门上挂了个牌子「桃花轩」。
LONG );
        set("exits", ([
                "west"  : "/d/taohua/houyuan",
        ]));
   
        setup();
}

