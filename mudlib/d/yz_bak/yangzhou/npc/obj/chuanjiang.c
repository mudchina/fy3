
//music yangzhou's 船桨

#include <ansi.h>
#include <weapon.h>

inherit BLADE;

void create()
{
        set_name("船桨", ({"chuanjiang","jiang"}) );
        set_weight(400);
        set("no_get",1);
        set("no_drop","你的船桨不能丢弃,否则就完蛋了。\n");
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "付");
                set("material", "wood");
                set("wield_msg", "$N拣起一把湿淋淋的$n握在手中。\n");
                set("unequip_msg", "$N放下了手中的$n。\n");
             }
        init_blade(5);
        setup();
}       


