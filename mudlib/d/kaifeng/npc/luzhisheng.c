// seng.c
inherit NPC;

void create()
{
set_name("鲁智深",({"lu zhisheng"}));
set("long","这个胖大和尚露出好一身花绣,正是五台山来的僧人.\n");
	set("gender", "男性");

set("age",42);
set("shen_type", 1);
set("str",35);
set("title","花和尚");
set("water",300);
set("food",300);
set("int", 20);
set("con", 20);
set("max_kee",900);
set("max_gin",100);
set("force",1200);
set("max_force",1200);
set("force_factor",100);
set("combat_exp",1500000);
set("kee",2000);
set("max_kee",2000);
	set("score", 100);
	set("apply/attack",  30);
	set("apply/defense", 30);

set_skill("force",170);
set_skill("unarmed",170);
set_skill("blade",170);
set_skill("staff",170);
set_skill("dodge",100);
set_skill("parry",170);
set("chat_chance",5);
set("chat_msg",({
  "你这厮,贼眉贼眼的看老爷作什么?\n",
  "几个破落户敢打洒家菜园子的主意,哼,哼!\n",
  "方丈说过上一年就让我当个阁主,院主什么的.\n",
  "我那林冲兄弟真是一条好汉子,枪法了得.\n",
  }));
	setup();
carry_object(__DIR__"obj/dao-cloth")->wear();
carry_object("/d/obj/weapon/staff/chanzhang")->wield();
add_money("gold",2);
}

