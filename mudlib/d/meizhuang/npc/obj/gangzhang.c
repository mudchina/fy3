//Oldsix's 钢杖

#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("精钢杖",({"gangzhang","gang zhang","zhang","staff"}));
	set_weight(9000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("value",5000);
	set("long","精钢炼制成的环杖。\n");
	set("material","steel");
	}
	init_staff(30);


	setup();
}
