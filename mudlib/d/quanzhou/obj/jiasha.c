#include <armor.h>
inherit CLOTH;
string *name=({"护法","大红","月白","灰色","粗布","天罗"});

void create()
{
        set_name(name[random(sizeof(name))]+"袈裟", ({ "jia sha","cloth" }) );
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("material", "cloth");
                set("unit", "件");
                set("armor_prop/armor", 15);

        }
        setup();
}

