#include <weapon.h>

inherit THROWING;

void create()
{
set_name("芙蓉金针",({"jinzhen"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("long","尾部打造成芙蓉花的形状,其花蕊突出一根金针.\n");
set("unit","撮");
set("base_unit","根");
set("base_weight",10);
     set("base_value", 1);
        }
set_amount(13);
        init_throwing(20);
        setup();
}

