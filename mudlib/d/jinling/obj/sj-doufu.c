// jingling 豆腐

inherit ITEM;
inherit F_FOOD;
#include <ansi.h>

void create()
{
        set_name(HIW"水晶豆腐"NOR, ({"shuijing doufu", "doufu"}));
        set_weight(200);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", HIW"一块成半透明的豆腐，晶莹剔透，不知道的还以为是块水晶\n"NOR);
                set("unit", "块");
                set("value", 80);
                set("food_remaining", 5);
                set("food_supply", 50);
        }
}
