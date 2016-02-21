
#include <weapon.h>

inherit HAMMER;

void create()
{
        set_name("流星锤", ({ "hammer" }) );
        set_weight(8000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long", "沉重的流星锤,上面步满了尖刺。\n");
                set("value", 300);
                set("material", "iron");
                set("wield_msg", "$N拿出一把$n,虎虎地舞了两个圈子。\n");
                set("unwield_msg", "$N松开手中的$n,却正好砸到了脚板。\n");
        }
        init_hammer(15);
        setup();
}

