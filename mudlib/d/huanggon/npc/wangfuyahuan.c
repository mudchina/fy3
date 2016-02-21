inherit NPC;
void create()
{
   set_name("王府丫鬟",({"ya huan"}));
   set("gender","女性");
   set("age",18);
   set("combat_exp",800);
   set("force",100);
   set("max_force",100);
   set("force_factor",3);
   set("chat_chance",3);
   set("chat_msg",({
   "丫鬟道:听说以前的敖少保就关在后花园的石牢中.\n",
   "丫鬟道:听说石牢内的铁栏杆只有一把刀和一把剑能砍开.\n",
   "丫鬟道:你是谁呀,我看你怎么这么面熟呢.\n",
   }));
   
   set_skill("unarmed",5);
   set_skill("parry",5);
   set_skill("dodge",5);
   setup();
   add_money("silver",1);
   carry_object("/obj/armor/female3-cloth")->wear();
 }