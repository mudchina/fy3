//Oldsix's 竹刀

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("竹刀",({"zhudao","zhu dao","dao","blade"}));
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("value",500);
	set("long","青竹制成的短刀，杀伤力较小。\n");
	set("material","bamboo");
	}
	init_blade(10);

	set("wield_msg", "$N「唰」地一声抽出一把$n握在手中。\n");
	set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");

	setup();
}
