inherit NPC;
void create()
{
   set_name("神照上人",({"shang ren"}));
   set("gender","男性");
   set("age",43);
   set("combat_exp",80000);
   set("force",300);
   set("max_force",300);
   set("force_factor",23);
   set("chat_chance",5);
   set("chat_msg",({
   "神照上人道:吃王爷的饭,就要为王爷办事.\n",
   "神照上人道:吴额驸的家将武艺不过如此.\n",
   "神照上人道:和尚吃素我不吃,和尚念经我杀人.\n",
   }));
   
   set_skill("unarmed",35);
   set_skill("parry",35);
   set_skill("dodge",35);
   set_skill("huashan-quanfa",30);
   map_skill("unarmed","huashan-quanfa");
   map_skill("parry","huashan-quanfa");
   setup();
   add_money("silver",40);
   carry_object("/obj/armor/jiasha")->wear();
 }