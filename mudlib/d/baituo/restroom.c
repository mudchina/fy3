//room: /d/btshan/restroom.c
#include <room.h>
#include <ansi.h>;
inherit ROOM;

void create()
{
  set("short","休息室");
  set("long",
      "这里是间休息室，里面有张大床。在这里睡觉非常舒服，没人能\n"
  "打扰。南面是气派的长廊。\n"
     );

  set("exits",([
      "south" : __DIR__"changlang",
     ]));

  set("sleep_room", 1);
  set("no_fight",1);
  set("no_steal",1);

 setup();
}
void init()
{       object ob;
        string classname;
        if( interactive( ob = this_player()))
        {
        classname = ob->query("family/family_name");
        if(classname !="白驼山派") {

        ob->move(__DIR__"changlang");
        message_vision(HIW"一股强烈的煞气把$N挡了出去。\n\n"NOR, ob);
                               }
        }
}

