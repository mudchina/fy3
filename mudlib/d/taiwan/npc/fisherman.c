inherit NPC;
void dashou();
void create()
{
     set_name("渔夫",({"fisherman","yufu"}));
     set("gender","男性");
     set("age",42);
     set("long","渔夫一脸病容,看来病得着实不轻!\n");
     set("max_force",700);
     set("force",700);
     set("combat_exp",50000);
     set_skill("dodge",40);
     set_skill("force",40);
     set_skill("parry",40);
     set_skill("literate",10);
     set_skill("unarmed",40);
     setup();
     carry_object("/obj/cloth")->wear();
}
void init()
{object ob;
  ::init();
    if (interactive(ob=this_player())&&!is_fighting())
           {  remove_call_out("greeting");
              call_out("greeting",1,ob);
           }
}
void greeting(object ob)
{  if (!ob||environment()!=environment(ob))  return;
   command("say 行行好,给点吃的,好几天没吃东西了... ...\n");
   return;
}
int accept_object(object who,object ob)
{  if (ob->query("food_remaining"))
         {   command("say 谢谢,多谢这位"+RANK_D->query_respect(who)+",您真是我的救命恩人哪!\n");
             message("vision","渔夫拿着"+ob->name()+"狼吞虎咽地吃了起来!\n","/d/taiwan/house");
             call_out("dashou",4,1);
             return 1;
          }
  command("say 咳,这东西对我没什么用啊!");
  return notify_fail("");
}
void dashou()
{object ob,ob1,ob2;
  string room;
 ob2=load_object("/d/taiwan/house");
 ob=this_player();
 if (!ob||environment()!=environment(ob))  return;
 room="/d/taiwan/house";
 if (!present("dashou",ob2))
{   clone_object("/d/taiwan/npc/dashou")->move("/d/taiwan/house");
    message("vision","突然从屋子外面冲进一条大汉,对着渔夫不断冷笑!\n",room);
}
ob1=present("dashou",ob2);
message_vision("$N嘿嘿一笑:不是穷得饭都没吃了么!你手里拿的什么?
说着冲上前去对$n一顿毒打!\n",ob1,this_object());
this_object()->unconcious();
return;
}