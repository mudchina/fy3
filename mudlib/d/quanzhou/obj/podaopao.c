#include <armor.h>

inherit CLOTH;

void create()
{
       set_name("破道袍", ({"daopao", "pao"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long",
"一件粗布制的灰色道袍,蒙满了灰尘,还有许多破洞.．\n");
                set("unit", "件");
                set("value", 1000);
                set("material", "cloth");
                set("armor_prop/armor", 15);
             }
}

