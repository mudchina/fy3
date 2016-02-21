inherit NPC;
void create()
{
   set_name("龙虎道人",({"dao ren"}));
   set("gender","男性");
   set("age",45);
   set("combat_exp",5000);
   set("str",23);
   set_skill("daoxuexinde",200);
set("can_teach_knowledge",1);
   setup();
 carry_object("/obj/armor/dao-cloth")->wear();
 carry_object("/obj/armor/dao-xie")->wear();
 }
int recognize_apprentice(object ob)
{
  if (!ob->query_temp("mark/龙虎"))
  return notify_fail("龙虎道人道:施主如能为本观布施一二,贫道倒可以教你.\n");
  ob->add_temp("mark/龙虎",-1);
  return 1;
}
int accept_object(object ob,object item)
{
    if (!item->query("money_id")||item->value()<20000) 
 return notify_fail("龙虎皱眉道:至少10两银子.\n");
  if (!ob->query_temp("mark/龙虎"))
       ob->set_temp("mark/龙虎",0);
  ob->add_temp("mark/龙虎",item->value()/30);
  return 1;
}
