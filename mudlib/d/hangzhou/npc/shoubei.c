inherit NPC;
void create()
{    
       int skill;
       set_name("�ر�",({"shoubei","guan","guard"}));
       set("gender","����");
       set("age",20+random(20));
       skill=random(4)+2;
       set("str",10+random(20));
       set("combat_exp",1000*skill);
       set_skill("unarmed",10*skill);
       set_skill("parry",10*skill);
       set_skill("dodge",10*skill);
       set_skill("sword",10*skill);
       setup();
       carry_object(__DIR__"obj/sword")->wield();
       carry_object("/obj/cloth")->wear();
       add_money("coin",50*skill);
}