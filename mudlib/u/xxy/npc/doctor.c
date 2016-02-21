#include <ansi.h>
inherit NPC;
int ask_heal();
int do_check();
int money,wound,maxqi;
void create()
{ 
         set_name("叶天士",({"ye tianshi","doctor","laoban","ye"}));
         set("title","天医星");
         set("shen_type",1);
         set("attitude","friendly");
         set("gender","男性");
         set("age",65);
         set("str",32);
         set("per",27);
         set("combat_exp",500000);
         set_skill("dodge",120);
         set_skill("parry",120);
         set_skill("unarmed",120);
         set("inquiry",([
                   "治病":(:ask_heal:),
                   "治疗":(:ask_heal:),
                   "治伤":(:ask_heal:),
       ]));
     setup();
         carry_object("/obj/cloth")->wear();
         add_money("gold",2);
}
int ask_heal()
{
    do_check();
    if (money>0)
    { 
    command("look "+this_player()->query("id"));
    command("say 治这伤不难，拿"+money+"两银子来!\n");
    return 1;
    }
    command("say 老夫最看不起的，就是无病呻吟的人!\n");
    return 1;
}
int accept_object(object who,object ob)
{
   int val;
   if (ob->query("money_id"))
  {     do_check();
        val=(int)ob->value()/100;
        if (ob->value()<100) 
              {  command("say 这些钱老夫还不放在眼里!\n");
                return 0;
               }
              if (money==0)
             {   command("say 老夫最看不起的，就是无病呻吟的人!\n");
                  return 0;
             }   
        if (val<money)
          {     command("say 给多少钱，我就给你治多少伤，这叫作公平交易!\n");
                who->set("eff_kee",wound+val);
                message_vision(HIR+"$N从中指褪下一根银针，快速在$n的几个穴道刺了一遍，
$n吐出一口瘀血，伤势减轻了!\n"NOR,this_object(),this_player());
               return 1;
          }
        else
         {    command("say 好，且看老夫的手段!\n");      
              message_vision(HIR+"$N从中指褪下一根银针，快速在$n的几个穴道刺了一遍，
 $n吐出一口瘀血，伤势全愈了!\n"NOR,this_object(),this_player());
              who->set("eff_kee",maxqi);
              return 1;
          }     
  }
   command("say 老夫是如此好骗的人么，哼!\n");
   return 0;
}
int do_check()
{
    wound=(int)this_player()->query("eff_kee");
    maxqi=(int)this_player()->query("max_kee");
        money=maxqi-wound;
return 1;
}

     
