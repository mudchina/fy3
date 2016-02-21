#include <ansi.h>

inherit KZZNPC;
int do_give();
string query_save_file() { return DATA_DIR + "npc/齐元凯"; }

void create()
{
#include <kzznpc.h>
set("inquiry",([
  "四十二章经":(:do_give:),
  ]));
set("key",1);
	setup();
add_money("silver",2);
carry_object("/obj/cloth")->wear();
}
int do_give()
{
  object ob=this_player();
	string bh;

	bh=(string)ob->query("banghui");
	if( !bh || bh!=(string)query("banghui"))	{
    message_vision("$N看了看$n,仰天打了个哈哈.\n",this_object(),ob);
	return 1;
	}
  if (query("key")!=1)  {
  	command("say 已经给帮中兄弟取走啦.\n");
  	return 1;
  }
  if (find_object(__DIR__"obj/42book4.c")) {
    new(__DIR__"obj/key.c")->move(ob);
 message_vision("$N取出把青铜钥匙给$n道:就在京城客栈卧室内.\n",this_object(),ob);
 set("key",0);
 return 1;
}
new(__DIR__"obj/42book4.c")->move(ob);
message_vision("$N从衣袖中掏出本书给$n道:要好好保管.\n",this_object(),ob);
set("key",0);
return 1;
}
