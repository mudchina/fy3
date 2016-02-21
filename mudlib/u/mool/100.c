#include <ansi.h>;
inherit ROOM;

void create ()
{
  set ("short", "实验室");
  set ("long", @LONG
LONG);
        set("item_desc",([
"stuff" : "你意外的发现，柱子上好象有一个地方陷了下去，要不要按一下试试看？\n",
"chaidui" : "你？\n",
         ]));



  set("light_up", 1);
  set("no_fight", 1);
  set("no_magic", 1);

  setup();
}
void init()
{
        add_action("do_pull","pull");
        add_action("do_search","search");
}

 int do_pull(string arg)
{
        object me;
        me = this_player();
        if (arg != "stuff") return 0;
        message_vision("地下突然裂开一个洞，只见$N掉了下去。\n",me);
        me->move("/u/mool/101");
        return 1;
}
int do_search(string arg)
{
        object me,ob,sn;
        me = this_player();
        if (arg != "chaidui") return 0;
        message_vision("拿到了钥匙。\n",me);
        ob=new("/u/yuki/obj/key");
        ob->move(me);
        return 1;
        }


