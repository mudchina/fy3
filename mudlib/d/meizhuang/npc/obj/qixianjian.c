//Oldsix's 铁剑

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("七弦剑",({"qixianjian","qixian jian","jian","sword"}));
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("long","这是一把打造得相当精致的长剑，有一定杀伤力。\n");
	set("value",2000);
	set("material","iron");
	}
	init_sword(20);

// These properties are optional, if you don't set them, it will use the
// default values.

	set("wield_msg", "$N「唰」地一声抽出一把$n握在手中。\n");
	set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");

// The setup() is required.

	setup();
}
