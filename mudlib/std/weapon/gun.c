//gun.c



#include <weapon.h>

inherit GUN;

void create()
{
	set_name("手提机枪", ({ "gun"}) );
	set_weight(4000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit", "挺");
		set("value", 500);
		set("material", "iron");
	set("long", "这是一挺德国制造的手提机枪,由于重量很轻,所以很受士兵青睐。\n");
	set("wield_msg", "$N拿出一挺威力很大的$n握在手中。\n");
	set("unequip_msg", "$N将手中的$n挎在腰间。\n");
	}
	init_blade(25);
	setup();
}
