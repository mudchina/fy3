//Mr. music yangzhou ≥§…¿

#include <armor.h>

inherit CLOTH;

void create()
{
	set_name("∂Ã…¿", ({"duan shan","shan", "duanshan","cloth" }) );
	set_weight(1500);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("value", 200);
		set("unit", "º˛");
		set("material", "cloth");
		set("armor_prop/armor", 3);
	}
	setup();
}
