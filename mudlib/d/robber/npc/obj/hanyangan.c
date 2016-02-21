#include <weapon.h>
inherit SWORD;

void create()
{
        set_name("旱烟杆", ({ "hanyangan", "hanyan" }) );
	set_weight(3000);
	if( clonep() )
		set_default_object(__FILE__);
	else {
                set("long","一根乌油油的烟杆.\n");
		set("unit", "根");
		set("value", 70);
		set("material", "wood");
                set("wield_msg","$N慢慢吞吞地从袖观中掏出一根$n.\n");
                set("unwield_msg","$N用火石打着了$n中的烟丝,云山雾海地吞吐起来.\n");
	}
 init_sword(15);
 setup();
}
