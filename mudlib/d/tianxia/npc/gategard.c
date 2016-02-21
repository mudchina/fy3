inherit NPC;
void create()
{
  set_name("某甲",({"bangzhong"}));
  set("age",34);
  set("shen_type",-1);
  set("combat_exp",40000);
  set("title","天下会帮众");
 
  set_skill("force",30);
  set_skill("dodge",30);
  set_skill("unarmed",30);
  set_skill("literate",30);
  set_skill("parry",30);
  
  set("inquiry",([
  "关卡":"过了这就是天下会的总舵，设卡盘查.\n",
  "报名":"用answer xxx回答自己的名字就行了.\n",
     ]));
  set("banghui","天下会");

  setup();
  add_money("silver",3);
  carry_object("/obj/weapon/blade")->wield();
 }
void init()
{
  add_action("do_answer","answer");
}
int do_answer(string arg)
{
  object ob;
      ob=this_player();
 if (!ob||environment(ob)!=environment(this_object()))
         return;
 if (ob->query("banghui")=="天下会")  {
  command("say 自家弟兄，还来这一套干什么!\n");
  return;   }
 if (!arg) return notify_fail("报上自己的名字!(answer xxx).\n");
 if (ob->query("name")!=arg)  {
  command("say 是吗?是吗?我怎么看着不像!\n");
  return notify_fail("");
       }
  command("look "+ob->query("id"));
  command("say 不错，过去吧!\n");
  ob->set_temp("tianxia/pass_answer",1);
  return 1;
}