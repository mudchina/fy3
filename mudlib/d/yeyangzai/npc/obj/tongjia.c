// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>

inherit ARMOR;

void create()
{
	set_name("Í­¼×",({"tongjia","jia","armor"}));
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "¼þ");
		set("material","iron");
		set("armor_prop/armor",10);
		set("value",500);
	}
	setup();
}
