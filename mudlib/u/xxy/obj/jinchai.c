#include <armor.h>
#include <ansi.h>

inherit HEAD;
void create()
{
        set_name(YEL+"金钗"+NOR, ({"jinchai"}));
   set_weight(200);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("material", "gold");
                set("unit", "枝");
                set("long","一支凤头金钗,顶端的凤嘴微微张开.\n");
                             set("value",1000);
                set("wield_msg","$N从头上拔下一枝$n,羞涩地笑了笑!\n");
                             set("unwield_msg","$N十指变幻不定,转眼间,手中的$n不见了!\n");
   set("skill_type", "fork");
   if( !query("actions") ) {
     set("actions", (: call_other, WEAPON_D, "query_action" :) );
     set("verbs", ({ "thrust", "pierce" }) );
   }
     set("armor_prop/armor", 1);
     set("weapon_prop/attack",10);
        }
        setup();
}
