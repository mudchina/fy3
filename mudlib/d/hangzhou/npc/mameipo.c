inherit NPC;
#include <ansi.h>
string ask_hunyin();
void create()
{
   set_name("马媒婆",({"meipo"}));
   set("age",65);
   set("gender","女性");
   set("mingwang",200);
   set("nickname",RED"姻缘天定"NOR);
   set_skill("unarmed",40);
   set("inquiry",([
"介绍对象":(:ask_hunyin:),
]));
   set("chat_chance",5);
   set("chat_msg",({
HIC"愿天下有情人终成娟侣,是前生注定事莫错过姻缘.\n"NOR,
(:random_move:),
  }));
   setup();
   carry_object("/obj/cloth")->wear();
}
void init()
{
  object ob;
  ::init();
  if (interactive(ob=this_player())&&!is_fighting()) {
  	remove_call_out("greeting");
  	call_out("greeting",1,ob);
   }
 add_action("do_agree","agree");
}
void greeting(object ob)
{
   if (!ob||environment(ob)!=environment()) return;
  if (ob->query("age")>16&&!ob->query("marry"))   {
    if (ob->query("gender")=="中性")  {
  message_vision("$N对$n摇头叹道:可惜是个太监,不然也到娶媳妇的时候了.\n",this_object(),ob);
  return;    }
  message_vision("$N对$n凑上前道:好俊俏的人儿,可要老婆子给你"+YEL+"介绍对象"+NOR+"?\n",this_object(),ob);
  return;
}
  if (ob->query("gender")=="中性")
 message_vision("$N对$n摇头叹道:可惜,可惜,你将在黑暗中痛苦一生.\n",this_object(),ob);
 return;
}
string ask_hunyin()
{
    object *list=users();
    object ob=this_player();
    string who,gender=ob->query("gender");
    int i;
  if (gender=="中性")  
    return "你个太监还想找对象结婚么?";
  if (ob->query("marry")) return "你都是结了婚的人了,还找什么对象?";
  if (ob->query("age")<16) return "这么小就想找对象啦,嘻嘻.\n",
  i=0;
  while (i<sizeof(list))  {
  if (list[i]->query("gender")==gender||list[i]->query("gender")=="中性"
  ||list[i]->query("age")<16||list[i]->query("marry"))
   i++;
  else {
 who=list[i]->query("id");
 ob->set_temp("mameipo/who",who);
 return "看来"+list[i]->query("name")+"和你很相配,你意下如何?(agree)\n";
   }
}
return "看来暂时没有与你相配的人.";
}
int do_agree()
{
  object who,ob=this_player();
 if (!ob->query_temp("mameipo/who"))  {
 tell_object(ob,"马媒婆对你道:你是想老婆子给你"+YEL+"介绍对象"+NOR+"么?\n");
 return 1;
  }
 tell_object(ob,HIC"马媒婆对你道:既如此,老婆子就给你把这好事儿给对方说说.\n"NOR);
 who=find_player(ob->query_temp("mameipo/who"));
 if (!who)    {
 tell_object(ob,HIC"马媒婆对你道:可惜,现在老婆子找不到你的意中人.\n"NOR);
 return 1;   }
 tell_object(who,ob->query("name")+"托马媒婆给你送来朵"+RED"红玫瑰"NOR+".\n");
 command("tell "+ob->query_temp("mameipo/who")+" "+ob->query("name")+"对你很有意思,托老婆子给你说说.\n");
 new(__DIR__"obj/hua.c")->move(who);
 tell_object(ob,HIC"马媒婆对你道:老婆子把你的意思转告了,你这就去吧.\n"NOR);
 ob->delete_temp("mameipo/who");
 return 1;
}