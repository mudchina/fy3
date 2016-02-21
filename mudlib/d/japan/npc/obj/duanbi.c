// dagger.c : an example weapon

#include <weapon.h>

inherit DAGGER;

void create()
{
        set_name("短匕", ({ "duan bi","dagger" ,"bishou"}) );
	set_weight(1000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "把");
            set("long", "这是一把泛着寒光的匕首。\n");
                 set("value", 1500);
		set("material", "steel");
	}
        init_dagger(12);

	set("wield_msg", "$N从怀中摸出一把$n握在手中。\n");
	set("unwield_msg", "$N将手中的$n藏入怀中。\n");

	setup();
}
