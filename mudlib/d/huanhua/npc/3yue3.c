inherit NPC;
int play();

void create()
{
  set_name("登雕梁", ({"deng diaoliang","deng"}));
        set("shen_type",1);
  set("gender", "男性");
  set("combat_exp", 20000);
  set("title","胡剑");
    set("long","三绝剑客的弟子之一!\n");
  set("age", 26);
  set("per", 30);
  set("attitude", "friendly");
  set("shen_type", 1);
  set_skill("unarmed", 10);
  set_skill("sword",60);
    set_skill("dodge",80);
    set_skill("parry",20);
    set_skill("literate",100);

  setup();
  set("chat_chance", 5);
  set("chat_msg", ({ (: play :) }));
  carry_object(__DIR__"obj/erhu")->wear();
}
int play()
{
   if (present("er hu",this_object()))
          command("play er hu");
   else command("sigh");
   return 1;
}
int accept_fight(object me)
{
    if (!present("sword",this_object()))
          new("/d/obj/weapon/sword/changjian")->move(this_object());
    command("wield sword");
    command("say 三剑联手,江湖莫敌!\n");
    return 1;
}


