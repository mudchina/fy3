// Mr.music yangzhou 飞镖

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("围棋子",({"weiqizi","weiqi zi","zi","qizi"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long","这是一枚普通的围棋子。\n");
			set("unit","些");
		set("base_unit","枚");
                set("base_weight", 10);
		set("base_value",50);
              }
	set_amount(1);
        init_throwing(5);
        setup();
}
