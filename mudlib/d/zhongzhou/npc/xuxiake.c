inherit NPC;
void create()
{
     set_name("徐霞客",({"xu xiake"}));
     set("gender","男性");
     set("age",64);
     set("str",20);
     set_skill("literate",200);
     set("can_teach_knowledge",1);
     setup();
carry_object("/obj/armor/guardsuit")->wear();
}
void init()
{
  ::init();
  add_action("do_answer","answer");
}
int recognize_apprentice(object ob)
{
 if (ob->query_temp("徐/answer"))
    return notify_fail("徐霞客道:请你回答问题.\n");
        if (!(int)ob->query_temp("mark/徐")) {
	if(ob->query_skill("literate",1)<60)	{
  command("say 我出个问题你答,答对了就教你.(answer)\n");
  remove_call_out("give_question");
  call_out("give_question",1,ob);
  return notify_fail("");
    }
 return notify_fail("徐霞客道:我正准备出本书,经费不足,你...\n");
    } 
     ob->add_temp("mark/徐", -1);
     return 1;
}
void give_question(object ob)
{
   int i,time;
   string str,answer;
   i=1+random(10);
   switch(i)  {
   case 1:  {
         str="老夫原名叫什么?";
         answer="徐弘祖";
         break;    }
   case 2:  {
         str="老夫的表字是什么?";
         answer="振之";
         break;    }
   case 3:  {
         str="老夫几岁离家出游?";
         answer="22";
         break;   }
   case 4:  {
         str="老夫出生在哪?";
         answer="江阴";
         break;   }
   case 5:   {
         str="老夫所写的一本游记叫什么名字?";
         answer="徐霞客游记";
         break;   }
   case 6:   {
         str="我家庭院中的罗汉松是谁所植?";
         answer="徐霞客";
         break;   }
   case 7:   {
         str="江阴古称什么?";
         answer="暨阳";
         break;    } 
   case 8:   {
          str="[黄田港口水如天,万里风墙看贾船.]是谁所写?";
          answer="王安石";
          break;   }
   case 9:   {
          str="江阴长江大桥全长多少米?";
          answer="3071";
          break;   }
   case 10:   {
          str="现在江阴电信169包月收多少元钱?";
          answer="100";
          break;   }
 }
 command("say "+str+"\n");
 time=time();
 ob->set_temp("徐/answer",answer);
 ob->set_temp("徐/time",(int)time);
 return;
}
int do_answer(string arg)
{
  object ob;
  int now_time;
   ob=this_player();
  if (!ob->query_temp("徐/answer")) 
 return notify_fail("徐霞客道:我又没给你出题,乱回答什么!\n");
  now_time=(int)ob->query_temp("徐/time")-time();
  if (now_time>10) {
     ob->delete_temp("徐/time");
     ob->delete_temp("徐/answer");
     return notify_fail("可惜,你超过时间了.\n");
     }
  if (arg!=(string)ob->query_temp("徐/answer"))
  return notify_fail("不对,你再想想!\n");
  command("say 不错,"+ob->query("name")+"你答对了.\n");
  ob->delete_temp("徐/time");
  ob->delete_temp("徐/answer");
  ob->add_temp("mark/徐",10);
  return 1;
 }
int accept_object(object who,object item)
 {
 if (!(int)who->query_temp("mark/徐"))
                who->set_temp("mark/徐", 0);
   if (!item->query("money_id")||item->value()<1000)
return notify_fail("你给的也太少了吧.\n");
   if (who->query_temp("徐/answer"))  {
   who->delete_temp("徐/answer");
   who->delete_temp("徐/time");                  
     }
   who->add_temp("mark/徐",(int)item->value()/30);
   message_vision("$N微微一笑,点了点头.\n",this_object());
   return 1;
}
         
