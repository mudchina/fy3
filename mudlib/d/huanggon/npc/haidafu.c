inherit NPC;
string do_try();

void create()
{
   set_name("海大富",({"hai dafu"}));
   set("gender","中性");
   set("nickname","首领太监");
   set("age",56);
   set("combat_exp",500000);
   set("long","海大富掌管尚膳房,你可以向他打听入宫的事.\n");
   
   set_skill("unarmed",80);
   set_skill("parry",80);
   set_skill("dodge",80);
   set_skill("huashan-quanfa",80);
   set_skill("feiyan-huixiang",80);
   map_skill("unarmed","huashan-quanfa");
   map_skill("parry","huashan-quanfa");
   map_skill("dodge","feiyan-huixiang");
   
   set("max_force",800);
   set("force_factor",50);
   
   set("inquiry",([
   "进宫":(:do_try:),
   "太监":(:do_try:),
   "入宫":(:do_try:),
   ]));
 setup();
 add_money("silver",1);
}
void init()
{
  add_action("do_taijian","y");
  add_action("do_taijian","yes");
  add_action("do_no","no");
 }
string do_try()
{
  object ob=this_player();
  if (ob->query("gender")=="女性")
    return "我这处招的是太监,不是宫女,想入宫,下辈子吧.";
  ob->set_temp("will_taijian",1);
  return "你决定作太监入宫了吗?(yes/no).";
}
int do_taijian()
{
   object ob=this_player();
 if (ob->query("gender")=="女性")  {
 command("say 你是个女的,来凑什么热闹?\n");
 return notify_fail("");
}
 if (!ob->query_temp("will_taijian")) {
 command("say 什么yes和no,公公我不认识英文.\n");
 return notify_fail("");
}
 message_vision("$N取出把小钩子,在$n裆下飞快的一撩,
 又随手抓了把稻草灰一按,奔流而出的鲜血登时止住了.
 ......  ......\n",this_object(),ob);
 command("say 从此以后,你就能自由出入皇宫,富贵无限.\n");
 ob->set("gender","中性");
 return 1;
}
int do_no()
{
   object ob=this_player();
   ob->delete_temp("will_taijian");
 command("say 你再好好想想,公公我等着你.\n");
   return 1;
}    