#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("大铡刀", ({ "zhadao", "blade", "dao" }) );
        set_weight(8500);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "一把刀身漆黑，刀刃雪白，奇大的铡刀。\n");
                set("unit", "把");
       set("wield_msg", "$N抽出一柄$n,舌头在刀忍上添了两下。\n");
       set("unwield_msg", "$N放下手中$n，难到要立地成佛？\n");
                set("value", 4000);
                set("material","steel");
        }
        init_blade(20);
        setup();
}

