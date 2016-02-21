// Room: /d/new/tianxia/river2
inherit ROOM;

void create()
{
  set ("short", "地下河");
  set ("long", @LONG
冰冷的水流和无尽的黑暗!
LONG);

  setup();
}
void init()
{
  object ob;
  ob=this_player();
  remove_call_out("greeting");
  call_out("greeting",10+random(30),ob);
}
void greeting(object ob)
{
   if (!ob||environment(ob)!=this_object()) return;
   tell_object(ob,"你被一阵强劲的水流冲了出去.\n");
   ob->move(__DIR__"inwell");
   return;
}