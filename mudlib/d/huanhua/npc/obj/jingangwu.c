#include <weapon.h>

inherit HAMMER;

void create()
{
        set_name("金刚杵", ({ "hammer" }) );
        set_weight(20000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "根");
                set("long", "这是一根沉重的金刚杵，打造的相当坚实。没有千斤力气是拿不起的。\n");
                set("value", 1200);
                set("material", "iron");
                set("wield_msg", "$N拿出一把$n，试了试重量，然後握在手中。\n");
                set("unwield_msg", "$N放下手中的$n。\n");
        }
        init_hammer(40);
        setup();
}

