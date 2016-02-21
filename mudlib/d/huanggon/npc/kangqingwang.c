inherit NPC;
int ask_shenzhi();
void create()
{
   set_name("康亲王",({"kang qingwang"}));
   set("gender","男性");
   set("age",43);
   set("combat_exp",18000);
   set("force",300);
   set("max_force",300);
   set("force_factor",13);
   set("chat_chance",3);
   set("chat_msg",({
   "康亲王道:放在佛堂中的一本书突然不见了.\n",
   "康亲王道:熬拜这厮,可给我添了不少麻烦.\n",
   "康亲王道:我府中的石牢稳固,绝对攻不破.\n",
   }));
   set("inquiry",([
   "熬拜":"就关在后院石牢.\n",
   "四十二章经":"前几天突然不见了.\n",
   "韦小宝":"韦都统么,是本王的好友.\n",
"圣旨":(:ask_shenzhi:),
   ]));
   set_skill("unarmed",25);
   set_skill("parry",25);
   set_skill("dodge",25);
   setup();
   add_money("gold",1);
   carry_object("/obj/armor/male5-cloth")->wear();
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
   if (!ob||environment(ob)!=environment()) return;
 if (ob->query("gender")=="男性") {
 command("say 我正要招些武功高的人作家将,你来应聘吗?\n");
 return;
}
  if (ob->query("gender")=="女性") {
  command("say 来得正好,我正想再娶一房小老婆!\n");
  return;
 }
  if (ob->query("gender")=="中性")  {
  command("say 这位公公大驾止此,不知有何公干.\n");
  return;
 }
 return;
}
int ask_shenzhi()
{
object ob,obj;
ob=this_player();
obj=present("shen zhi",ob);
if (!obj&&ob->query("xxy/quest")==1)   {
command("say 嘿嘿，失落了圣旨，那可是死罪一条啊！不过，最近皇上对本王倒还\n
看重，可是，你也知道，我只是个空头王爷，家中穷得连锅都快卖啦!\n");
}
return 1;
}
int accept_object(object who,object item)
{
 if (item->query("money_id")&&item->value()>=100000)
{
who->delete("xxy/quest");
command("say 我怎么能收钱呢?我是清官!给人看到多不好,快收起来，放到我书房去!\n
至于你的事情，看在我们一贯的交情上，一定帮你办好，你放心!\n");
return 1;
}
command("say 就算打点上下的太监，就要10两金子了，你才这么点，怎够?\n");
return 0;
}
