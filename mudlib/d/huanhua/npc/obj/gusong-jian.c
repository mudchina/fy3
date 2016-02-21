#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("古松残阙", ({"sword","jian"}));
   set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long","这是一柄无光色、陈旧、有裂纹、如古松一般的断剑。\n");
                set("unit", "把");
                set("value", 1000);
                set("material", "steel");
                set("wield_msg", "$N从扫帚中慢慢抽出一柄$n握在手中。\n");
                set("unwield_msg", "$N将手中的$n插回手中的扫帚。\n");
        }
        init_sword(45);
        setup();
}

