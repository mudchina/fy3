// Mr.music yangzhou 飞镖

#include <weapon.h>

inherit THROWING;

void create()
{
        set_name("飞镖", ({ "feibiao" ,"biao"}) );
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "这是一支普通的飞镖。\n");
                set("unit", "支");
                set("base_unit", "支");
                set("base_weight", 10);
                set("base_value", 20);
                set("value", 20);
              }
        set_amount(1);
        init_throwing(5);
        setup();
}
