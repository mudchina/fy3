// jingling 豆腐

inherit ITEM;
inherit F_FOOD;
inherit F_LIQUID;

void create()
{
        set_name("清水豆腐", ({"baozi", "dumpling"}));
        set_weight(200);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", "一个富春的三丁包子。\n");
                set("unit", "个");
                set("value", 100);
                set("food_remaining", 5);
                set("food_supply", 30);
                set("max_liquid", 60);


        }
}
