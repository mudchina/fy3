#include <armor.h>

inherit CLOTH;

void create()
{
       set_name("小短褂", ({"duangua", "cloth"}));
        set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long",
"圆口对襟小褂子，穷人家小孩子的穿着．\n");
                set("unit", "件");
                set("value", 500);
                set("material", "cloth");
                set("armor_prop/armor", 4);
             }
}

