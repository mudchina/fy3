#include <ansi.h>

inherit KZZNPC;
int do_give();
string query_save_file() { return DATA_DIR + "npc/温有道"; }

void create()
{
#include <kzznpc.h>
set("inquiry",([
  "四十二章经":(:do_give:),
  ]));
set("book",1);
	setup();
	carry_object("/obj/std/armor/tongkui")->wear();
	carry_object("/obj/std/armor/tongjia")->wear();
	carry_object("/obj/std/armor/tongxue")->wear();
	carry_object("/obj/std/armor/tongshoutao")->wear();
add_money("silver",2);
}
int do_give()
{
  object ob=this_player();
	string bh;

	bh=(string)ob->query("banghui");
  if ( !bh || bh!=(string)query("banghui"))	{
	tell_object(ob,"温有道看了看你,哼了一声.\n");
	return 1;
  }
  if (query("book")!=1)  {
  	tell_object(ob,"已经给人要走啦,下此要早些来.\n");
  	return 1;
  }
  if (find_object(__DIR__"obj/42book2.c")) {
    new(__DIR__"obj/daodejing.c")->move(ob);
 message_vision("$N从书架上抽出本书给$n道:这本怎样?\n",this_object(),ob);
 set("book",0);
 return 1;
}
new(__DIR__"obj/42book2.c")->move(ob);
message_vision("$N从衣袖中掏出本书给$n道:要好好保管.\n",this_object(),ob);
set("book",0);
return 1;
}