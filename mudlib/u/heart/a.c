#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "空房间");
        set("long", "这是一间什麽也没有的空房间。\n");
        setup();
}

void init()
{
add_action("do_a","fuck");
}
int do_a()
{
this_player()->set("env/msg_home",HIW"真心好饿哦,一声长啸,回家去吃老婆菀儿做的香喷喷的饭去了...."NOR);
this_player()->set("env/msg_min",HIR"你感觉到清风徐徐..隐约中你看见百猫大阵中露出了真心的小脑袋。"NOR);
this_player()->set("env/msg_mout",HIB"你感觉到一阵眩目。一堆妖猫架着真心飘然而去..."NOR);
return 1;
}

