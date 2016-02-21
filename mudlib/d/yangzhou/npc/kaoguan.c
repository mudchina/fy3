inherit NPC;
#include "quest.h"
#include <localtime.h>
int give_quest(object ob);
int now_time();
void create()
{
set_name("范举人",({"fan jvren","fan","jvren","fanjvren"}));
set("age",56);
set("str",23);
set("xxy/lvl",4);
set("xxy/rank","举人");
set("inquiry",([
"here":"这里是童生考场，想考试的话，最好看看墙上的告示(gaoshi).\n",
"考试":"看墙上的告示吧。\n",
]));
setup();
}
void init()
{
 ::init();
 add_action("do_exam","exam");
 add_action("do_answer","answer");
}
int do_exam()
{
  object ob;
  int level;
  string rank;
  ob=this_player();
 if (!ob||environment(ob)!=environment()) return 0;
 if (ob->query_skill("literate",1)<10) return notify_fail("主考官摇头道：等你读书写字进步些再来吧.\n");
level=ob->query("xxy/lvl");
 if (level)  {
       rank=ob->query("xxy/rank");
       if (level>query("xxy/lvl"))
       return notify_fail("主考官惊讶道："+rank+"大人，不要开玩笑了.\n");
       return notify_fail("主考官惊讶道：你已是"+rank+"，还考什么童生呢?\n");
        }
 if (now_time()==ob->query("xxy/last_check")) return notify_fail("主考官瞄了你一眼道：明天再来吧!\n");
 if (ob->query_temp("xxy/answer"))
 return notify_fail("主考官指着你道：问题还没回答吧!\n");
message_vision("$N向$n恭敬地施礼：请主考大人出题!\n",ob,this_object());
 give_quest(ob);
return 1;
}
int give_quest(object ob)
{ 
 mapping quest;
 string *text,word,pass;
 int i;
 quest=exam[random(sizeof(exam))];
 text=quest["text"];
 i=random(sizeof(text));
if (random(2)==1) {
      if (i!=0) {  word=text[i-1]; pass="前一句";}
      else {word=quest["author"];pass="作者";}
      }
 else { if (i!=(sizeof(text)-1))  {word=text[i+1];pass="后一句";}
        else {word=quest["title"];pass="题目";}
      }
 ob->set_temp("xxy/answer",word);
 command("say ["+text[i]+"... ...],请问"+pass+"是？\n");
 return 1;
}
int do_answer(string arg)
{
  object ob=this_player();
 if (!ob->query_temp("xxy/answer")) return notify_fail("主考官笑道：我可还没出题，你胡说些什么?\n");
message_vision("$N沉思良久，道：此题答案可是["+arg+"]?\n",ob);
if (arg==ob->query_temp("xxy/answer")) {
   command("nod");
   command("chat 恭喜"+ob->query("name")+"顺利考取童生。\n");
   ob->set("xxy/rank","童生");
   ob->set("xxy/lvl",1);
   ob->delete_temp("xxy");
   ob->delete("xxy/last_check");
   return 1;}
  command("shake");
  command("say 不要灰心，明天再来。\n");
  ob->delete_temp("xxy");
  ob->set("xxy/last_check",now_time());
  return 1;
}
int now_time()
{int i;
 object ob=this_player();
 mixed *local;
 local = localtime(time()*60);
 i=local[LT_MDAY] + (local[LT_HOUR]>23? 1 : 0);
 return i;
}
  
