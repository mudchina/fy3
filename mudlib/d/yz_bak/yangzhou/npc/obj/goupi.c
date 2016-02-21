//Mr.music yangzhou »¢Æ¤

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("¹·Æ¤", ({ "gou pi","goupi","pi" }) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {

		set("material", "pi");
		set("value", 100);
		set("unit", "¼þ");
		set("armor_prop/armor", 2);
	}
	setup();
}
