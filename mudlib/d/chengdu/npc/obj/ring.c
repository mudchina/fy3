// bye enter

#include <armor.h>

inherit FINGER;

void create()
{
        set_name("×êÊ¯½äÖ¸", ({ "zuanshi ring", "ring" }));
        set("weight", 400);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("unit", "¸ö");
                set("value", 20000);
                set("material", "gold");
                set("armor_prop/armor", 1);
        }
        setup();
}   
