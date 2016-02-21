inherit NPC;
void create()
{
    set_name("守卫",({"shouwei"}));
    set("gender","男性");
       set("title","[天风楼]");
    set("age",20+random(30));
    set("combat_exp",100000+random(50000));
    set("max_force",1000);
    set("force",1000);
    set("max_kee",800+random(400));
    set("kee",800+random(400));
    set("force_factor",20+random(30));
    set_skill("dodge",100+random(40));
    set_skill("unarmed",100+random(40));
    set_skill("sword",100+random(40));
    set_skill("parry",100+random(40));
    set_skill("force",100+random(40));
    setup();
    carry_object("/d/obj/weapon/sword/changjian")->wield();
    carry_object("/obj/cloth")->wear();
}
void init()
{
   object ob;
   ::init();
   if (interactive(ob=this_player())&&!is_fighting())       {
          remove_call_out("greeting");
          call_out("greeting",1,ob);
       }
}
void greeting(object ob)
{
    object ob1;
    string str;
    ob1=present("pai",ob);
       if (!ob1)          {
           command("say 大胆狂徒，胆敢混入本院!\n");
           kill_ob(ob);
           return;
       }
    str=ob->query("name");
    if (str!="金牌")
          {
                command("say 这地方企是你能进来的，还不退下!\n");
          }
  return;
}            