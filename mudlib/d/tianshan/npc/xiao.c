inherit NPC;
void create()
{
  set_name("萧青峰",({"xiao qinfeng","xiao"}));
  set("age",54);
  set("gender","男性");
  set("combat_exp",300000);
  
  set("long","相貌清癯，三绺长须，背微佝偻，活像个科场失意的老儒。\n");
  
  set_skill("dodge",60);
  set_skill("unarmed",60);
  set_skill("parry",60);
  set_skill("force",60);
  set_skill("literate",60);
  set_skill("sword",60);

  setup();
  carry_object(__DIR__"obj/qingjian")->wield();
  add_money("silver",40);
  }                                         