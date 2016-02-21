inherit NPC;
int go_out();
void create()
{
    set_name("诸葛虎",({"zhuge","dianzhu","boss"}));
    set("gender","男性");
    set("age",67);
    set("title","[天下一家店]");
    set("combat_exp",1500000);
    set("max_force",1500);
    set("force",1500);
    set("max_kee",1200);
    set("kee",1200);
    set("max_gin",900);
    set("gin",900);
    set("max_sen",700);
    set("sen",700);
    set("force_factor",50);
    set("str",34);
    set("per",36);
    set("kar",45);
    set("inquiry",([
        "out":(:go_out:),
        "出去":(:go_out:),
]));
   set_skill("unarmed",200);
   set_skill("dodge",200);
   set_skill("parry",200);
   set_skill("force",200);
   set_skill("sword",200);
   set_skill("blade",200);
setup();
   carry_object("/obj/cloth")->wear();
   carry_object("/d/obj/weapon/blade/jindao")->wield();
}
int go_out()
{
   object ob;
   ob=this_player();
   message_vision("$N挥手在躺椅上按了一下，$n眼前一黑，再看时已到了外面!\n",this_object(),ob);
  ob->move("/d/xxy/zhuting");
  return 1;
}