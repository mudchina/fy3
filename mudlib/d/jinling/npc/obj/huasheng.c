
inherit ITEM;
inherit F_FOOD;
#include <ansi.h>

void create()
{
        set_name(HIY"五香花生米"NOR, ({"wuxiang huasheng", "huasheng"}));
        set_weight(50);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", "一颗五香花生米。\n");
                set("unit", "颗");
                set("value", 50);
                set("food_remaining", 1);
                set("food_supply", 50);
        }
}
