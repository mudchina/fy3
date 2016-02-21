//Mr.music yangzhou атв╟

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("атв╟", ({ "lie zhuang", "liezhuang","cloth" }) );
	set_weight(5000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "╪Ч");
                set("value", 600);
		set("material", "cloth");
		set("armor_prop/armor", 5);
		set("armor_prop/personality",2);
	}
	setup();
}
