inherit NPC;
int about_tea();
int give_tea();
void create()
{
     set_name("大姑娘",({"girl","guniang"}));
     set("gender","女性");
   set("age",18);
    set("shen_type",1);
     set("combat_exp",200000);
     set("str",24);
     set("per",32);
     set_skill("unarmed",70);
     set_skill("parry",70);
     set_skill("dodge",70);
     set("inquiry",([
            "喝茶":(:about_tea:),
            "茶":(:about_tea:),
            "tea":(:about_tea:),
      ]));
     setup();
     carry_object("/obj/cloth")->wear();
     add_money("silver",20);
}
void init()
{   object ob;
     ::init();
     if (interactive(ob=this_player())&&!is_fighting()) 
        {   remove_call_out("greeting");
                     call_out("greeting",1,ob);
                }
}
void greeting(object ob)
{  if(!ob||environment(ob)!=environment()) return;
  command("say 这位"+RANK_D->query_respect(ob)+"进来喝碗茶吧!\n");
  return;
}
int about_tea()
{  
   command("say 小店的铁观音远近闻名，只要一两纹银!\n");
   return 1;
}
int accept_object(object who,object ob)
{
    if (ob->query("money_id"))
      {   if (ob->value()!=100)
            {  command("say 小店开张不久,本小利薄，客官这是让我为难了!\n");
               return 0;
            }
          else
         command("say 客官稍等，我这就去给您把茶端来!");
         give_tea();
           return 1;
     }
   command("say 小店不抵押东西，客官见谅!\n");
     return 0;
}
int give_tea()
{   clone_object(__DIR__"obj/tea")->move(this_object());
    command("give tea to "+this_player()->query("id"));
    command("say 客官请慢用.\n");
    return 1;
}
 