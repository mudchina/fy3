#include <weapon.h>

inherit STAFF;

void create()
{
        set_name("钢杖", ({"gang zhang", "zhang", "staff"}));
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("unit", "根");
                set("value", 300);
                set("material", "steel");
set("long","亮闪闪的钢杖，摩娑得十分光滑。\n");
set("wield_msg","$N双手举起一把$n,显然很吃力.\n");
set("unwield_msg","$N把手中$n在地上重重一顿，$n插入地面半截.\n");
        }
        init_staff(35);
        setup();
}

