//Mr.music yangzhou »¢Æ¤

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("»¢Æ¤", ({ "hu pi","hupi","pi" }) );
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else {

                set("material", "pi");
                set("value", 2000);
		set("unit", "¼þ");
		set("armor_prop/armor", 15);
	}
	setup();
}
