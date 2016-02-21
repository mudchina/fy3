inherit NPC;
void create()
{
   set_name("明珠",({"mingzhu"}));
   set("gender","男性");
   set("age",45);
   set("combat_exp",2000);
   set("mingwang",4000);
   
   set_skill("unarmed",20);
   set_skill("parry",20);
   set_skill("dodge",20);
   set_skill("literate",50);
  set("chat_chance",5);
  set("chat_msg",({
  "明珠道:平西王居然想造反,我看是不想活了.\n",
  "明珠道:皇上手下的韦都统抓住了熬拜,现关在康亲王府.\n",
  "明珠道:太后那边昨天有出刺客了,我总绝得不大对.\n",
  }));
   
   setup();
   add_money("silver",10);
}