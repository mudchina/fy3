//Oldsix's 竹杖

#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("青竹杖",({"zhuzhang","zhu zhang","zhang","staff"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("value",500);
	set("long","青竹精制而成的禅杖。\n");
	set("material","bamboo");
	}
	init_staff(10);


	setup();
}
