#include <weapon.h>

inherit HAMMER;

void create()
{
        set_name("白绸伞", ({"baichou san","san"}));
        set_weight(600);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
		   set("long", "一把以青竹为骨,白绸为面的伞。\n");
                set("wield_msg","$N嫣然一笑,轻巧地打开一把$n!\n");
                             set("unwield_msg","$N微笑着收起手中的$n!\n");
        }
        init_hammer(25);
        setup();
}

