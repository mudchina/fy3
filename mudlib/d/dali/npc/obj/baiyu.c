
inherit ITEM;
inherit F_FOOD;
#include <ansi.h>

void create()
{
        set_name(WHT"清蒸白鱼"NOR, ({ "qingzheng baiyu", "baiyu", "yu" }) );
        set_weight(100);
        if (clonep())
                set_default_object(__FILE__);
        else {
             set("long", "一盘精心加工而成的“"+name()+"”。\n");
             set("unit", "盘");
             set("value", 1000);
             set("food_remaining", 10);
             set("food_supply", 30);
        }
}
