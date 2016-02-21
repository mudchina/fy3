#include <weapon.h>

inherit BLADE;

void create()
{
   set_name("牛耳尖刀", ({"niuer dao", "dao", "blade"}) );
   set_weight(800);
   if( clonep() )
     set_default_object(__FILE__);
   else {
     set("unit", "柄");
     set("value", 300);
     set("material", "iron");
     set("rigidity",80000);
     set("long", "这是一柄弯弧形的小尖刀。\n");
     set("wield_msg", "$N从靴筒中抽出一柄$n，唰地握在手中。\n");
     set("unequip_msg", "$N将手中的$n插入靴筒。\n");
   }
   init_blade(5000);
   setup();
}
