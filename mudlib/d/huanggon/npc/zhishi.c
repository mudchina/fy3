inherit NPC;
void create()
{
set_name("执事太监",({"tai jian"}));
set("age",46);
  set("gender","中性");
  set("mingwang",100);
set("combat_exp",51000);
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
  
void init()
{
object ob;
::init();
if (interactive(ob=this_player())&&!is_fighting()) {
remove_call_out("greeting");
call_out("greeting",1,ob);
}
}
void greeting(object ob)
{
 if (ob->query("xxy/lvl")<4)   {
tell_object(ob,"你刚想仔细看看周围，就被守殿的武士赶了出去!\n");
ob->move("/d/huanggon/qianqinmen");
}
return;
}
