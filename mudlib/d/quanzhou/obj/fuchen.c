#include <weapon.h>

inherit WHIP;

void create()
{
	set_name("乌柄拂尘", ({ "fuchen", "chen" }) );
	set_weight(3000);

	if( clonep() )
		set_default_object(__FILE__);
	else 
	{
		set("unit", "把");
		set("long", "乌木为柄,玄金丝所制成的拂尘,方外人所用.\n");
		set("value", 1000);		
		set("material", "stone");
	}
	init_whip(10);

	set("wield_msg", "$N「唰」地一声抽出一把$n。\n");
	set("unwield_msg", "$N收起手中的$n。\n");

	setup();
}
