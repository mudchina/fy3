inherit KZZNPC;
inherit F_VENDOR;
string query_save_file() { return DATA_DIR+"npc/苏佛儿";}
void create()
{
#include <kzznpc.h>
set("area_name","京都客栈");
set("area_file","/d/huanggon/jingdukezhan.c");
set("vendor_goods",([
"包子":     "/d/yangzhou/npc/obj/baozi",
"酒壶":     "/d/yangzhou/npc/obj/jiuhu",
"鸡腿":     "/obj/std/food/jitui",
"盐水鹅" :  "/d/yangzhou/npc/obj/yanshuie",
"花生米" :  "/d/yangzhou/npc/obj/huashengmi",
]));
set("chat_chance",3);
set("chat_msg",({
"苏佛儿道:听说东长安街正在招收入宫的太监.\n",
"苏佛儿道:宫中除了太监,只有蒙皇上召见才能进.\n",
"苏佛儿道:听说熬拜被抓到康亲王府了.\n",
})); 
	setup();
carry_object("/obj/armor/guardsuit")->wear();
add_money("silver",5);
}
void init()
{
  add_action("do_vendor_list","list");
}
int accept_object(object ob,object item)
{
  if (item->query("money_id")&&item->value()>=200) {
ob->set_temp("rent_paid",1);
  message_vision("$N一摆手道:里面请.\n",this_object());
  return 1;
}
 command("say 二两银子,别的东西老爷我看不上.\n");
 return notify_fail("");
 }         
