inherit NPC;
void create()
{
   set_name("道济和尚",({"daoji"}));
   set("age",34);
   set("long","灵隐寺的和尚,据说有法力.\n");
   set("str",17);
   set("env/wimpy",50);
   set("chat_chance",5);
   set("chat_msg",({
"道济念道:酒肉穿肠过,佛祖心中留.\n",
"道济嘴中念念有词,左手一晃,手中出现一条狗腿.\n",
}));
   set_skill("foxuexinde",200);
set("combat_exp",5000);
   set("can_teach_knowledge",1);
   setup();
carry_object("/obj/armor/seng-cloth")->wear();
}
int recognize_apprentice(object ob)
{
  if (!ob->query_temp("daoji"))
    return notify_fail("道济和尚喜欢喝酒,你不孝敬一点怎成.\n");
  ob->add_temp("daoji",-1);
  return 1;
}
int accept_object(object who,object item)
{
 int max,remain,val;
if (!who->query_temp("daoji"))
    who->set_temp("daoji",0);
  if (item->query("liquid/type")!="alcohol")
 return notify_fail("和尚喜欢的是酒,可不是你这东西.\n");
  max=item->query("max_liquid");
  remain=item->query("liquid/remaining");
  val=item->query("value")*remain/max;
  who->add_temp("daoji",(int)val/30);
  command("say 不错,不错,是上好的"+item->query("liquid/name")+",和尚很喜欢.\n");
return 1;
}
