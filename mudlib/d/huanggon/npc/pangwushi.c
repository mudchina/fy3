inherit NPC;
void create()
{
  set_name("ÅÖ´óÎäÊ¿",({"wushi"}));
  set("age",26);
  set("gender","ÄĞĞÔ");
  set("mingwang",300);
  set("combat_exp",8000);
  set_skill("unarmed",40);
  set_skill("parry",40);
  set_skill("dodge",20);
  set_skill("force",40);
  
  set("force",400);
  set("max_force",400);
  set("force_factor",20);
  
  setup();
  carry_object(__DIR__"obj/shuaijiaoyi.c")->wear();
  add_money("silver",3);
  }
  