//Oldsix's 铁刀

#include <weapon.h>

inherit BLADE;

void create()
{
	set_name("泼墨刀",({"pomodao","pomo dao","dao","blade"}));
	set_weight(6000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
	set("value",2000);
	set("long","一把黝黑的弯刀。\n");
	set("material","iron");
	}
	init_blade(20);

	set("wield_msg", "$N「唰」地一声抽出一把$n握在手中。\n");
	set("unwield_msg", "$N将手中的$n插入腰间的刀鞘。\n");

	setup();
}
