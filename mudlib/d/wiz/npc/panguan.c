// music  wiz's  铁面判官

inherit NPC;

void create()
{
        set_name("铁面判官", ({ "tiemianpanguan", "tiemian", "panguan","guan" }));
        set("long", "你看他，心里一惊，打了个抖。\n");
        set("title", "决不留情");
        set("gender", "男性");
        set("age", 59);
        set("per",90);
        
        set("combat_exp",1000000);

        set_skill("unarmed", 120);
        set_skill("dodge", 190);
        set_skill("parry", 140);
        set_temp("apply/attack", 30);
        set_temp("apply/defense", 30);
        set_temp("apply/damage", 5);

        set("inquiry", ([
              "rules":   "好好读下   help rules .",
        ]) );


        set("combat_exp", 20000);
        set("shen_type", 1);
        setup();
}


void init()
{
        object ob;

        ::init();
        if( interactive(ob = this_player()) && !is_fighting() )
                {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
                }
add_action("do_gui","gui");
add_action("do_gui","kneel");
return;
}


void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
                        say( "判官喝道：" + 
                            ob->query("name")
                                + "，还不下跪！ \n");
}


int do_gui(string arg)
{
// this line only want to remove normal discard process 
// but i do not know how to do it normally .  -- music

object ob;
ob=this_player(1);

 if( arg != ob->query("name"));
 /* 看上去是废话，但不能删 */

// if ( ob->query("badplayer") < 1) ob->set("badplayer",1); 
// else ob->add("badplayer",1);

ob->add("badplayer",1);

ob->save();

if( (ob->query("badplayer")) > (ob->query("age")-10) )
  {
   say ("看来你是没指望活着出去了，真是屡教不改!!\n");
   ob->move("/d/wiz/laofang");
   return 1;
  }
else {
      if ( ob->query("badplayer") >1 ) 
          {
           say (ob->query("name")+",你已有前科，如有再犯，绝不轻饶!!!\n");
           ob->die();
           return 1;
          }
      else{
           say (ob->query("name")+",你的帐先记下，如有再犯，绝不轻饶!!!\n");
           ob->move("/d/yangzhou/startroom");
          return 1;
          }

     }
return 1;
}

