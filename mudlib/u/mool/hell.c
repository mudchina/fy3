#include <login.h>
inherit ROOM;

void create ()
{
  set ("short", "十八层地狱");
  set ("long", @LONG
这里就是传说中的十八层地狱，四下里透着淡绿色的森森的光，不
远处有骸骨成堆，脚下有血水淅沥，一股腐臭的气味令你窒息。你抬头
看天，没有一丝颜色；你低头看地，只有血水泥尘。只怕永无超生之日
，生与死都毫无意义了。
LONG);

  set("compare",1);
  set("light_up", 1);
  set("no_kill",  1);
  set("no_fight", 1);
  set("no_steal", 1);
  set("no_magic", 1);
  setup();
}

void init()
{
  object me=this_player();

  me->set("startroom", "/u/mool/hell.c");

  add_action("do_null", "chat");
  add_action("do_null", "flyto");
  add_action("do_null", "chat*");
  add_action("do_null", "sys");
  add_action("do_null", "tell");
  add_action("do_null", "quit");
  add_action("do_null", "shout");
  add_action("do_null", "rumor");
  add_action("do_null", "suicide");
  add_action("do_null", "quitbk");
  add_action("do_null", "eat");
  add_action("do_null", "drink");
  add_action("do_null", "perform");
  add_action("do_null", "exert");
  add_action("do_null", "whisper");
  add_action("do_null", "exercise");
  add_action("do_null", "study");
  add_action("do_null", "reply");
  add_action("do_null", "home");
  add_action("do_null", "chat#");
  add_action("do_null", "sleep");
  add_action("do_null", "hit");
}
int do_null(string arg)
{
  tell_object(this_player(), "你被打入了十八层地狱，永无翻身之日。\n");
  return 1;
}


