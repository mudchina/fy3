inherit NPC;
void create()
{
     set_name("ÅÖ³øÊ¦",({"chushi","pangchushi"}));
     set("gender","ÄĞĞÔ");
     set("str",17);
     set("age",35);
     set("combat_exp",100000);
     set_skill("unarmed",70);
     set_skill("dodge",70);
     set_skill("force",70);
     set_skill("parry",70);
     setup();
     carry_object("/obj/cloth")->wear();
     add_money("silver",10);
}