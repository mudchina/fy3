inherit NPC;
inherit F_SAVE;

void create()
{
  set_name("盖一鸣",({"gai yiming"}));
  set("title","八步赶蟾");
  set("age",31);
  set("long","此人短小精悍，下巴尖削,其外号全称是:
[八步 赶蟾、赛专诸、踏雪无痕、独脚水上飞、双刺盖七省].\n");
  set("combat_exp",10000);
  set_skill("sword",30);
  set_skill("parry",30);
  set_skill("dodge",30);
  set_skill("force",30);
  set_skill("unarmed",30);
  set("area","荒芜坟地");
	set("shen_type",-1);

  set("chat_chance",8);
  set("chat_msg",({
  "我们老大真是英明神武,这推石阻路一招,真叫人佩服.\n",
  "老大说,要把[擅闯者死]改为[游客止步].\n",
  "我们太岳四侠这一出山,真是镇动那个...那个...[黄山村].\n",
   }));
  set("inquiry",([
 "让路":"给钱,给钱就让你过去.给东西也成.",
  ]));
	setup();
 carry_object("/obj/armor/cloth")->wear();
 carry_object(__DIR__"obj/gangci")->wield();
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
  command("say 哈哈,等了半天终于有肥羊上门了.\n");
  command("guard north");
  return;
            }
 command("say 原来是本帮弟兄,老大等你好久了.\n");
  return;
}
int accept_object(object me,object obj)
{
  if (obj->value()<10000)    {
  command("say 糊弄谁啊,一两金子,快,不然不给过.\n");
   return 0;        }
  command("guard cancel");
  message_vision("$N让开北面的路,让$n过去.\n",this_object(),me);
  return 1;
}

