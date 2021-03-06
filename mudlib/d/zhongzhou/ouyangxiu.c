//Mr.music yangzhou 欧阳修

inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("欧阳修", ({ "ouyangxiu", "ouyang xiu","ouyang" }) );
        set("gender", "男性" );
        set("age", 54);
        set("str", 90);
        set("cor", 90);
        set("cps", 90);
        set("int", 90);
        set("mingwang",1);
        set("max_force", 4000);
        set("force", 3000);
        set("force_factor", 3);

        set("rank_info/respect", "大人");

        set("long","这位就是扬州知府欧扬大人\n");

        create_family("翰林学社", 1, "社长");
        set("title","扬州知府");
        set("combat_exp", 100000);
        set("score", 2000);

        set_skill("unarmed", 200);
        set_skill("parry", 200);
        set_skill("dodge", 200);
        set_skill("sword", 200);
        set_skill("force", 200);
        set_skill("literate", 300);

        setup();
        carry_object("/obj/cloth")->wear();
}

void attempt_apprentice(object ob)
 {
        if( (int)ob->query_skill("literate",1) < 50 ) 
            {
             command("say " + RANK_D->query_respect(ob) +
 "聪明过人，但文学根基好象略显不足。\n");
                return;
            }
        command("smile");
        command("say " + RANK_D->query_respect(ob) + 
 "才思敏捷，见解不凡，孺子可教。\n");
        command("recruit " + ob->query("id") );
 }

 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("class", "shusheng");
 }
 

void init()
{
        ::init();
        add_action("do_chat", "chat");
        add_action("do_chat","chat*");
        add_action("do_jiehun","jiehun");
        add_action("do_jiehun","marry");
        add_action("do_lihun","lihun");
}


int do_chat()
{
  object ob;
   ob=this_player(1);
  
   say("知府脸色一沉，喝道：大堂之上，竟敢喧哗！\n");
   tell_object(ob,"两边衙役冲上前来，不由分说，一阵大板打得你"
                  +"皮开肉绽,昏了过去。\n");
   ob->unconcious();
   return 0;
}


int do_lihun(string arg)
{
object me;
object ob;
object card;

object *inv;
int i;

me=this_player(1);

if(!arg)   {
             tell_object(me,"你自己和自己离婚啊？\n");
             return 1;
            }

if( !objectp(ob = find_player(arg)))
         {
            tell_object(me,"你提的人目前不在这世界吧？\n");
            return 1;
         }


      say(me->query("name")+"想要和"+ob->query("name")+"离婚.\n");

      if( !(me->query("marry") == arg) )
        {
          say("知府疑惑的看了看"+me->query("name")+
                "说：有没搞错啊？\n");
          return 1;
        }

      if(!me->query("marry"))
        {
         say("知府惊讶道："+me->query("name")+
             "你没有伴侣，如何离婚?\n");
         return 1;
        }

      if(!present(arg,environment()))
        {
         say("知府摇摇头说:"+ob->query("name")+"现在不在这里。\n");
         return 1;
        }
      if( ob->query("want_lihun")==me->query("id") )
        {
         say("知府叹息道：你们好自为之。\n");

         inv=all_inventory(me);
         for(i=0;i<sizeof(inv);i++)      
            {
             if(inv[i]->query("id")=="jiehunzheng") 
              {
                destruct(inv[i]);

              }
            }
         inv=all_inventory(ob);
         for(i=0;i<sizeof(inv);i++)
            {
             if(inv[i]->query("id")=="jiehunzheng")
              {
                destruct(inv[i]);

              }
            }

         me->delete("marry");
         me->delete("want_marry");
         me->delete("want_lihun");
         ob->delete("marry");
         ob->delete("want_marry");
         ob->delete("want_lihun");
         tell_object(me,"你的婚姻关系被解除了\n");
         tell_object(ob,"你的婚姻关系被解除了\n");
        }
      else
        {
         say("知府道:"+me->query("name")+",你的想法我知道了"+
             ",不过还要问问"+ob->query("name")+"的意思.\n");
         me->set("want_lihun",arg);
         return 1;
        }

return 1;
}



int do_jiehun(string arg)
{
object me;
object ob;
object card;

me=this_player(1);

if(!arg)   {
             tell_object(me,"你自己和自己结婚啊？\n");
             return 1;
            }

if( !objectp(ob = find_player(arg)))
         {
            tell_object(me,"你提的人目前不在这世界吧？\n");
            return 1;
         }


      say(me->query("name")+"想要和"+ob->query("name")+"结婚.\n");
      
      if(me->query("age") <16)
        {
         say("知府摇摇头，显然你没达到结婚年龄。\n");
         return 1;
        }

      if(me->query("marry")== arg )
        {
          say("知府疑惑的看了看"+me->query("name")+
                "说：有没搞错啊？\n");
          return 1;
        }

      if(me->query("marry")) 
        {
         say("知府大怒，一拍桌子喝道："+me->query("name")+
             "你已有伴侣，竟敢重婚！\n");
         say("两边衙役冲上前来，不由分说，一阵大板打得"+
               me->query("name")+"皮开肉绽,昏了过去。\n");
         me->unconcious();
         return 1;
        }
      
      if(!present(arg,environment()))
        {
         say("知府摇摇头说:"+ob->query("name")+"现在不在这里。\n");
         return 1;
        }
      if( ob->query("want_marry")==me->query("id") )
        {
         say("知府微笑道：祝你们俩白头谐老，永无二心。\n");   
         ob->set("marry",me->query("id"));
         me->set("marry",arg);
         card= clone_object("/obj/marry_card");
         card->set("name","你和"+arg+"的结婚证");
         card->move(me);
         card= clone_object("/obj/marry_card");
         card->set("name","你和"+me->query("id")+"的结婚证");
         card->move(ob);
         say("知府递给"+ob->query("name")+"和"+me->query("name")
                  +"一人一张结婚证书.\n");
         return 1 ;
         
        } 
      else
        {
         if( me->query("gender") == ob->query("gender") )
          {
           say ("同性恋啊！, 欧阳修被"+me->query("name")+
                  "气得口吐白沫昏了过去.\n");
           return 1;
          }
         say("知府微笑道:"+me->query("name")+",你的心意我知道了"+
             ",不过还要问问"+ob->query("name")+"的意思.\n");
         me->set("want_marry",arg);
         return 1;
        }

return 1;
}



