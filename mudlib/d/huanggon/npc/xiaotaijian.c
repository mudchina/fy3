inherit NPC;
void create()
{
  set_name("Ð¡Ì«¼à",({"xiao taijian"}));
  set("age",16);
  set("gender","ÖÐÐÔ");
  set("mingwang",100);
  set("combat_exp",1000);
  set_skill("unarmed",10);
  set_skill("parry",10);
  set_skill("dodge",10);
  set_skill("force",10);
  
  set("force",100);
  set("max_force",100);
  set("force_factor",5);
  
  setup();
  add_money("coin",30);
  }
  