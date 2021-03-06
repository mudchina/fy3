inherit NPC;
inherit F_SAVE;

void create()
{
  set_name("常长风",({"chang changfeng"}));
  set("title","双掌开碑");
  set("age",39);
  set("long","又高又肥，便如是一座铁塔摆在地下,身前放著一块大石碑.\n");
	set("shen_type",-1);
  set("combat_exp",25000);
  set_skill("hammer",30);
  set_skill("parry",30);
  set_skill("dodge",30);
  set_skill("force",30);
  set_skill("unarmed",30);
  set("area","荒芜坟地");

  set("chat_chance",8);
  set("chat_msg",({
  "这块石碑真的好重啊,可老大硬是要我扛着,说是威慑作用.\n",
  "前几天搬石碑时,砸伤了脚,现在走路还是不便.\n",
  "大哥硬要挑这个地方,说是跟太岳四侠的身份相配.\n",
   }));
  set("inquiry",([
 "让路":"给钱,给钱就让你过去.给东西也成.",
  ]));
	setup();
 carry_object("/obj/armor/cloth")->wear();
 carry_object(__DIR__"obj/mubei")->wield();
}
void init()
{ 
	object ob,area;
	area=new("/obj/area");
	area->create(query("area"));
	set("banghui",(string)area->query("banghui"));
	destruct(area);

 if (interactive(ob=this_player())&&!is_fighting()) {
   remove_call_out("greeting");
   call_out("greeting",1,ob);
   }
}
void greeting(object ob)
{
  string str;
 if (!ob||environment(ob)!=environment()) return;
  str=this_object()->query("banghui");
 if (ob->query("banghui")!=str)    {
  command("say 此山非我开,此树非我栽,你要从此过,还是得付钱.\n");
  command("guard west");
  return;
            }
 command("say 原来是本帮弟兄,老大等你好久了.\n");
  return;
}
int accept_object(object me,object obj)
{
  if (obj->value()<20000)    {
  command("say 糊弄谁啊,二两金子,快,不然不给过.\n");
   return 0;        }
  command("guard cancel");
  message_vision("$N让开西面的路,让$n过去.\n",this_object(),me);
  return 1;
}

