//Oldsix's 木刀

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("木刀",({"mudao","mu dao","dao","blade"}));
	set_weight(800);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("value",100);
	set("long","朽木制成的短刀，杀伤力很小。\n");
	set("material","wood");
	}
	init_blade(5);

	set("wield_msg", "$N「唰」地一声抽出一把$n握在手中。\n");
	set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");

	setup();
}
