//Mr. music yangzhou ³¤ÉÀ

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("³¤ÉÀ", ({"changshan","shan", "cloth" }) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("value", 100);
		set("unit", "¼þ");
		set("material", "cloth");
		set("armor_prop/armor", 5);
	}
	setup();
}
