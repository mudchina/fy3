
inherit ITEM;
inherit F_FOOD;
#include <ansi.h>

void create()
{
        set_name(HIR"Ω∑—Œ≈≈π«"NOR, ({"jiaoyan paigu", "paigu"}));
        set_weight(200);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", "“ª≈Ãœ„≈Á≈ÁµƒΩ∑—Œ≈≈π«°£\n");
                set("unit", "≈Ã");
                set("value", 3000);
                set("food_remaining", 10);
                set("food_supply", 50);
        }
}
