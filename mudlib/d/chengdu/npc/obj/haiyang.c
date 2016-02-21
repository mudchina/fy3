// bye enter

#include <ansi.h>

#include <armor.h>

inherit FINGER;

void create()
{
        set_name(HIC "海洋之心" NOR, ({ "haiyang necklace", "necklace" }));
        set("weight", 400);
        if (clonep())
                set_default_object(__FILE__);
        else {
                set("long", "这是谢瑞麟赖之成名的呕心沥血之作，据说可以给佩带的人带来幸运。\n");
                set("unit", "串");
                set("value", 500000);
                set("wear_msg",HIC "$N凝视着手中的海洋之心，神情郑重地将它带在脖子上，浑身竟然发出一阵祥和的蔚蓝色。\n "NOR );
                set("remove_msg",  "$N将海洋之心从脖子上取了下来。\n");
                set("material", "gold");
                set("armor_prop/armor", 500);
        }
        setup();
}   
