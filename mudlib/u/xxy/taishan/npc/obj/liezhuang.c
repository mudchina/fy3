//Mr.music yangzhou атв╟

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("атв╟", ({ "liezhuang", "cloth" }) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "╪Ч");
                set("value", 500);
		set("material", "cloth");
		set("armor_prop/armor", 10);
	}
	setup();
}
