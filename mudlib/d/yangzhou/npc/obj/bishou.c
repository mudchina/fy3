//Mr.music yangzhou 匕首

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("匕首", ({ "bishou" , "bi"  }) );
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
		set("long", "这是一把锋利的匕首。\n");
		set("value", 200);
		set("material", "steel");
	}
	init_sword(15);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N「唰」地一声抽出一把$n握在手中。\n");
	set("unwield_msg", "$N将手中的$n插在腰间。\n");

	setup();
}
