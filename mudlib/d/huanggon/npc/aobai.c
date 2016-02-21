inherit NPC;
void create()
{
	set_name("鳌拜",({"ao bai"}));
   set("gender","男性");
   set("age",54);
   set("combat_exp",900000);
	set("shen_type",-1);
   set("force",600);
   set("max_force",600);
   set("force_factor",30);
   
   set_skill("unarmed",70);
   set_skill("parry",70);
   set_skill("dodge",70);
   set_skill("huashan-quanfa",70);
   map_skill("parry","huashan-quanfa");
   map_skill("unarmed","huashan-quanfa");
   setup();
   add_money("silver",1);
	if( sizeof(children("/obj/armor/tcby.c"))<=2)
		carry_object("/obj/armor/tcby")->wear();
	else	carry_object("/obj/cloth")->wear();
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
    if (ob->query_temp("aobai")!=1)  {
 message_vision("$N冷冷的看了$n一眼:老子看你不顺眼.\n",this_object(),ob);
   return;
   }
  if (environment()->query("short")=="石牢内")  {
    set_leader(ob);
    command("guard "+ob->query("id"));
}
  return;
}
