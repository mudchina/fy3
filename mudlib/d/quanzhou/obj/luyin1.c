inherit ITEM;

void create()
{
  set_name("到海南的路引", ({ "luyin"}));
  set("unit", "张");
  set_weight(300);
  if( clonep() )
     set_default_object(__FILE__);
  else {
    set("value", 120);
    set("material", "paper");
  }
  setup();
}

