//Oldsix's Ä¾¶¤

#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("Ä¾¶¤",({"muding","ding"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long","Ä¾Í·Ï÷³ÉµÄ¼â¶¤¡£\n");
			set("unit","Ð©");
		set("base_value",1);
			set("base_unit","Ö§");
                set("base_weight", 10);
              }
	set_amount(1);
	init_throwing(2);
        setup();
}
