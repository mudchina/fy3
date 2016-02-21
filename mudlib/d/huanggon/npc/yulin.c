inherit NPC;
void create()
{
   set_name("玉林大师",({"yu lin"}));
   set("gender","男性");
   set("age",76);
   set("combat_exp",70000);
   set("str",20);
   set("can_teach_knowledge",1);
   set_skill("foxuexinde",200);
   setup();
   carry_object("/obj/armor/jiasha");
}
int recognize_apprentice(object ob)
{
  if (!ob->query_temp("mark/玉林"))
  return notify_fail("玉林大师道:我佛说法尚需酬劳,老僧怎能例外.\n");
  ob->add_temp("mark/玉林",-1);
  return 1;
}
int accept_object(object ob,object item)
{
  if (!item->query("money_id")||item->value()<1000) 
 return notify_fail("玉林皱眉道:至少10两银子.\n");
  if (!ob->query_temp("mark/玉林"))
       ob->set_temp("mark/玉林",0);
  ob->add_temp("mark/玉林",item->value()/30);
  return 1;
}
  