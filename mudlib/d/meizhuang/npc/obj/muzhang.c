//Oldsix's 木杖

#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("木杖",({"muzhang","mu zhang","zhang","staff"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("value",100);
	set("long","深山红木制成的手杖。\n");
	set("material","wood");
	}
	init_staff(5);


	setup();
}
