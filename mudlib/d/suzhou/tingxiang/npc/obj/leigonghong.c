// Mr.music yangzhou ÖñÒ¶


#include <weapon.h>

inherit THROWING;

void create()
{
	set_name("À×¹«ºä",({"leigong hong","leigong","hong"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
		set("long", "Çà³ÇÅÉµÄ¶ÀÃÅ°µÆ÷¡£\n");
	set("unit","±ú");
	set("base_unit","Ã¶");
	set("base_weight",5);
		set("value", 100);
              }
	set_amount(1);
        init_throwing(1);
        setup();
}
