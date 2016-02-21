//suoyi ËòÒÂ

#include <armor.h>

inherit CLOTH;

void create()
{
        set_name("ËòÒÂ", ({ "suoyi","yi","suo yi" }) );
        set_weight(6000);
        if( clonep() )
                set_default_object(__FILE__);
        else {

                set("material", "leather");
                set("value", 2000);
                set("unit", "¼ş");
                set("armor_prop/armor", 200);
        }
        setup();

}

