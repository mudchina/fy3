#include <weapon.h>
inherit CLUB;

void create()
{
        set_name("秤", ({ "cheng" }));
        set_weight(2000);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("unit", "杆");
                set("long", "一杆闹市货物常用的杆秤。\n");
                set("value", 1500);
                set("rigidity",100);
                set("material", "steel");
                set("wield_msg", "$N抽出一杆$n握在手中。\n");
                set("unwield_msg", "$N将手中的$n插回腰间。\n");
        }
        init_club(5);
        setup();
}

