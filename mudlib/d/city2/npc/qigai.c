inherit NPC;
void create()
{
 set_name("乞丐",({"qi gai"}));
 set("age",34);
 set("gender","男性");
 set("combat_exp",300);
 set_skill("unarmed",10);
 set("chat_chance",5);
 set("chat_msg",({
 "寒风吹过,乞丐混身打了个颤,抱紧了双臂.\n",
 "乞丐往着前面不远的宫墙,神往不已.\n",
 "乞丐偷偷告诉你:以前有人曾从河里潜进宫去.\n",
 "乞丐眼巴巴的看着你:好心人,给点吃的吧.\n",
 }));
 setup();
 }
int accept_object(object ob,object item)
{
command("say 从桥上跳下,运气好就能进入宫中.\n");
return 1;
}
  