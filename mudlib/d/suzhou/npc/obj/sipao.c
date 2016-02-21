// cloth.c
//
// This is the basic equip for players just login.

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("к©еш",({"sipao"}));
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "╪Ч");
		set("material","silk");
		set("value",1000);
		set("armor_prop/armor",10);
	}
	setup();
}
