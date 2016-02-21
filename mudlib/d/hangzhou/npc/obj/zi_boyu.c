#include <weapon.h>

inherit HAMMER;
inherit F_LIQUID;

void create()
{
        set_name("紫金钵盂", ({"boyu", "zijing"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long", "一个紫金所制的钵盂。\n");
                set("unit", "个");
		set("value", 3000);
		set("max_liquid", 5);
                set("wield_msg", "$N抓起一个$n，握在手中当武器。\n");
                set("material", "steel");
        }

        set("liquid", ([
                "type": "water",
                "name": "清水",
                "remaining": 5,
        ]) );
        init_hammer(5);
        setup();

}

