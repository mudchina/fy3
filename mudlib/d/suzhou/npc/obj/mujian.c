//Mr.music yangzhou 短剑

#include <weapon.h>

inherit SWORD;

void create()
{
	set_name("木剑",({"mujian","mu jian","jian","sword"}));
	set_weight(2000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("long","朽木削成的短剑，杀伤力很小。\n");
	set("material","wood");
	}
	init_sword(3);

	set("wield_msg", "$N「唰」地一声抽出一把$n握在手中。\n");
	set("unwield_msg", "$N将手中的$n插入腰间的剑鞘。\n");

	setup();
}
