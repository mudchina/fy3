inherit ITEM;
#include <ansi.h>

void create()
{
        set_name(CYN"青铜钥匙"NOR, ({"key","yaoshi"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("long", "这是一把普通的青铜钥匙。
适当的地方可以使用(use key).\n");
                set("unit", "把");
                set("no_get", 1);
                set("no_steal", 1);
                set("no_beg", 1);
                set("no_drop", 1);
                set("no_put", 1);
        }
        setup();
}
void init()
{
  add_action("do_use","use");
}
int do_use(string arg)
{
  object ob,env;

  ob=this_player();
  env=environment(ob);

  if (file_name(env)!="/d/huanggon/kezhanwoshi") return 0;
  new(__DIR__"42book5.c")->move(env);
  message_vision("$N把钥匙在墙角一个窟窿中一捅,一快砖
  掉了下来,里面是本书.... ...\n",ob);
  destruct(this_object());
  return 1;
}
