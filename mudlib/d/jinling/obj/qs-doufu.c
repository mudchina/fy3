// jingling 豆腐

inherit ITEM;
inherit F_FOOD;
#include <ansi.h>

void create()
{
        set_name(HIW"清水豆腐"NOR, ({"qingshui doufu", "doufu"}));
        set_weight(200);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", HIW"一块纯白色的豆腐，带着一股清香。还没吃就已饱了。\n"NOR);
                set("unit", "块");
                set("value", 80);
                set("food_remaining", 5);
                set("food_supply", 50);
        }
}
