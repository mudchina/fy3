//Oldsix's 竹钉

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("竹钉",({"zhuding","ding"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long","青竹削制而成的钉子。\n");
			set("unit","些");
		set("base_value",5);
		set("base_unit","枚");
		set("base_weight",15);
              }
	set_amount(1);
	init_throwing(4);
        setup();
}
