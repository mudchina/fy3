
#include <weapon.h>

inherit HAMMER;

void create()
{
        set_name("残破墓碑", ({ "mubei" }) );
        set_weight(20000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "块");
                set("long", "碑上写的是[先考黄府君诚本之墓]。\n");
                set("value", 300);
                set("material", "stone");
                set("wield_msg", "$N用力捧起一块$n,憋得脸红耳赤。\n");
                set("unwield_msg", "$N放下手中的$n,却正好砸到了脚板。\n");
        }
        init_hammer(10);
        setup();
}

