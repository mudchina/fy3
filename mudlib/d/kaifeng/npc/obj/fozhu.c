// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
// shoupi.c

#include <armor.h>

inherit NECK;

void create()
{
set_name("紫檀佛串",({"fochuan"}));
   set_weight(1000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("material","wood");
                set("unit", "条");
set("armor_prop/armor",10);
        }
        setup();
}

