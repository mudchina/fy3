#include <ansi.h>

inherit ITEM;
inherit F_LIQUID;

void create()
{
        set_name(HIY"江口醇"NOR, ({ "jiangkou chun", "chun","jiuhu" }) );
        set_weight(400);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", HIY"这是一个金黄色的酒壶，里面装的是江南名酒“江口醇”。\n"NOR);
                set("unit", "壶");
                set("value", 10000);
                set("max_liquid", 50);
        }

        // The liquid contained in the container is independent, we set a copy
        // in each cloned copy.
        set("liquid", ([
                "type": "water",
                "name": "江口醇",
                "remaining": 50,
        ]) );
}
