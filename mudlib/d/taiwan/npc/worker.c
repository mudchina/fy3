inherit NPC;
void create()
{   int i;
    i=random(3);
    if (i==1)
     set_name("水手",({"shuishou"}));
    else if (i==2)
     set_name("搬运工",({"worker","banyu"}));
    else set_name("船夫",({"chuanfu"}));
    set("gender","男性");
    set("age",18+random(30));
    set("combat_exp",10000*i);
    set("max_force",300*i);
    set("force",300*i);
    set_skill("unarmed",10*i+20);
    set_skill("force",10*i+20);
    set_skill("parry",10*i+20);
    setup();
    carry_object("/obj/cloth")->wear();
    add_money("silver",10*i+5);
}
    
         