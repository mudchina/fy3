inherit ITEM;

void create()
{
  set_name("Â·Òı", ({ "luyin"}));
  set("unit", "ÕÅ");
  set_weight(300);
  if( clonep() )
     set_default_object(__FILE__);
  else {
    set("material", "paper");
  }
  setup();
}

