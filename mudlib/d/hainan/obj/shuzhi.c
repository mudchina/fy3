#include <weapon.h>

inherit SWORD;

void create()
{
        set_name("��֦", ({"shuzhi"}));
        set_weight(7000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("material", "wood");
        }
        init_sword(10);
        setup();
}

