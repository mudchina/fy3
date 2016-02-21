inherit ITEM;
void create()
{
  set_name("虎皮金蛟椅",({"chair","yizi"}));
  set_weight(28000);
  set("long", "这是张雕刻精美，四角包金，上披虎皮的椅子。\n" );
  if( clonep() )
    set_default_object(__FILE__);
  else {
    set("unit", "把");
    set("material", "stone");
    set("value", 2000);
    set("no_sell", 1);
    set("no_get",1);
  }
  setup();
}

void init ()
{
  object me = this_object();
  object where = environment(me);

  if (where && userp(where))
  {
    remove_call_out ("destruct_me");
    call_out ("destruct_me",900+random(900),me);
  }
}

void destruct_me (object me)
{
  destruct (me);
}
