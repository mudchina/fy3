inherit NPC;
void how_old();
void create()
{
       set_name("法海和尚",({"fahai"}));
       set("shen_type",1);
       set("gender","男性");
       set("age",56);
       set("combat_exp",1600000);
       set("str",32);
       set("long","法海修行精深,善知过去未来,能断人间祸福.
尤其是对于推断人的生辰八字,百不失一.\n");
       set("max_kee",1200);
       set("kee",1200);
       set("max_force",2300);
       set("force",2300);
       set("force_factor",80);
       set_skill("unarmed",200);
       set_skill("parry",200);
       set_skill("dodge",200);
       set_skill("force",200);
       set_skill("literate",120);
       set_skill("hammer",200);
       setup();
       carry_object(__DIR__"obj/zi_boyu")->wield();
       carry_object(__DIR__"obj/hong_jiasha")->wear();
       add_money("gold",5);
}
void init()
{   
    add_action("do_answer","ask");
}
int accept_object(object ob,object obj)
{
  if (obj->query("money_id")&&obj->value()>100){
           ob->set_temp("fahai",1);
  command("say 欲知何人,从速报来!\n");
           return 1;
           }
  message_vision("$N低眉不语!\n",this_object());
  return 1;
}
int do_answer(string arg)
{
  object target;
  string str,str1,str2,sb,who;
  if (sscanf(arg,"%s about %s",sb,who)==2)   {
  	if (sb!="fahai")  return 0;
     target=find_player(who);  {
     	if (target) str2=target->query("name");
            else str2=who;
        }
       
     message_vision("$N向法海打听"+str2+"的生辰八字!\n",this_player());
        if (!this_player()->query_temp("fahai"))  {
           message_vision("$N指了指墙上挂着的条幅,微笑不语!\n",this_object());
           return 1;   }
  
  if (!target) {
  message_vision("$N对$n微微一笑,道:你要打听的人并不在此mud中!\n",this_object(),this_player());
        return 1;
   }
  message_vision("$N掐指细算了一会,点了点头!\n",this_object());
  str=CHINESE_D->chinese_date(((int)target->query("birthday")-14*365*24*60)*60);
  str1=chinese_number(target->query("age"));

  command("say "+str2+"生辰为"+str+",今年"+str1+"岁.\n");
  this_player()->delete_temp("fahai");
  return 1;
  }
 }         
  