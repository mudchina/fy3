// yaorong tan 小李飞刀

#include <weapon.h>

inherit THROWING;

void create()
{
        set_name("小李飞刀", ({ "feidao" ,"dao"}) );
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "这是一柄由特殊材料制成的刀口极薄的飞刀。\n");
                set("unit", "柄");
                set("base_unit", "柄");
                set("base_weight", 10);
                set("base_value", 20000);
                set("value", 20);
              }
        set_amount(1);
        init_throwing(55);
        setup();
}
