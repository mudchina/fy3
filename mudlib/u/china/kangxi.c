#include <ansi.h>
inherit NPC;
#include "/d/huanggon/quest/who.h"
void create()
{
    set_name(HIY"康熙皇帝"NOR,({"kang xi"}));
    set("gender","男性");
    set("age",18);
    set("combat_exp",2000);

    setup();
carry_object(__DIR__"obj/longpao")->wear();
}
void init()
{
  ::init();
  add_action("give_quest","require");
  add_action("do_jiaozhi","jiaozhi");
}
int do_jiaozhi()
{
  object ob,obj;
  int gold;
  ob=this_player();
  obj=present("shen zhi",ob);
  message_vision("$N大声道:臣"+ob->query("name")+"前来交旨！\n",ob);
  if (!obj)  {
  	command("say 大胆的"+ob->query("name")+",你的圣旨呢，我看你是不想活了!\n");
  	return 1;
       }
  if (ob->query("xxy/quest")) {
  	command("say "+ob->query("name")+",你领了差使，还不去做!\n");
  	return 1;
      }
 command("say "+ob->query("name")+",你做的不错，朕有嘉奖!\n");
 gold=2+random(5);
 tell_object(ob,"你得到了"+gold+"两黄金和10点信赖.\n");
 clone_object("/obj/money/gold.c",gold)->move(ob);
 destruct(obj);
 if (!ob->query("xxy/xinlai")) {
 	 ob->set("xxy/xinlai",10);
 	 return 1;
 	}
 ob->add("xxy/xinlai",10);
 return 1;
 }
int give_quest(string arg)
{
  object ob,room,shenzhi;
  mapping *whom,temp;
  string str,*whats;
  int num;
  ob=this_player();
  if (!arg||!sscanf(arg,"%d",num)) return notify_fail("你要申请哪项任务?\n");
  if (num>9||num<1) return notify_fail("请选择1..9之一.\n");
  message_vision("$N上前一步道:臣愿意完成任务"+num+",请皇上准奏!\n",ob);
  if (ob->query("xxy/quest"))  {
  	command("say "+ob->query("name")+",你好大胆,领过任务，还不去做!\n");
  	return 1;
  	}
  room=load_object("/d/huanggon/qianqingon.c");
  shenzhi=present("shen zhi",ob);
  if (shenzhi)   {
  	command("say "+ob->query("name")+"爱卿，你还有圣旨没交吧?\n");
  	return 1;
   }
  shenzhi=new("/d/huanggon/quest/shenzhi.c");
  whom=room->query("huangbang");
  if (!whom) {
  	command("say "+ob->query("name")+",你再去仔细看看黄榜(huang bang),没脑子!\n");
  	return 1;
       }
   temp=whom[num-1];
   whats=room->query("what");
  shenzhi->set("who1/name",temp["name"]);
  shenzhi->set("who1/id",temp["id"]);
  str=HIY"************************************************\n";
  str+="               圣旨\n";
  str+="    日月乾坤，皇帝诏曰:\n";
  str+="特命"+ob->query("xxy/rank")+ob->query("name");
  str+="向"+temp["name"]+"("+temp["id"]+")询问"+whats[num-1]+"一事.\n";
  str+="        "+NATURE_D->game_time()+"\n";
  shenzhi->set("long",str+"          钦此!\n"NOR);
  temp=who[random(sizeof(who))];
  shenzhi->set("who2/name",temp["name"]);
  shenzhi->set("who2/id",temp["id"]);
  shenzhi->set("what",whats[num-1]);
  message_vision("$N点了点头，一旁的小太监把一张圣旨递给$n.\n",this_object(),ob);
  shenzhi->move(ob);
  ob->set("xxy/quest",1);
  return 1;
  }