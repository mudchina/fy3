//Mr.music yangzhou 短剑

#include <weapon.h>

inherit STAFF;

void create()
{
	set_name("将军杖",({"jiangjunzhang","jiangjun zhang","zhang","staff"}));
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("value",2000);
	 set("long","精铁打造的环杖。\n");
	set("material","iron");
	}
	init_staff(20);


	setup();
}
