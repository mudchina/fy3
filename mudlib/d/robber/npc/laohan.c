inherit NPC;
void create()
{
    set_name("茶老汉",({"cha laohan"}));
    set("gender","男性");
set("age",57);
    set("shen_type",1);
    set("combat_exp",20000);
    
    set_skill("unarmed",20);
    set_skill("parry",20);
    set_skill("dodge",20);
    set_skill("literate",20);
    set("inquiry",([
  "茶":"那边缸中就是，您老自己请，茶资您看着给!\n",
  "茶水":"那边缸中就是，您老自己请，茶资您看着.\n",
  ]));

    setup();
}
int accept_object(object who,object ob)
{
   command("say 多谢您老，谢谢，谢谢!\n");
   return 1;
}

  
