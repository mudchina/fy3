#include <weapon.h>
inherit BLADE;
void create()
{
  set_name("阿拉伯弯刀",({"wan dao", "blade" }) );
  set_weight(2000);
  if( clonep() )
     set_default_object(__FILE__);
  else {
    set("long", "一把弯弯的战刀．\n");
    set("unit", "把");
    set("value", 400);
    set("material","metal");
  }
  init_blade(25);
  setup();
}

