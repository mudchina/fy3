inherit NPC;
void create()
{
    set_name("傅天义",({"fu tianyi","shenmo"}));
        set("shen_type",-1);
    set("gender","男性");
    set("age",76);
    set("str",26);
    set("title","铁腕神魔");
    set("per",34);
    set("combat_exp",50000);
    set("long","九天十地,十九人魔之一.他白眉白须，玄衣如铁.\n");
    set_skill("parry",60);
    set_skill("dodge",50);
    set_skill("unarmed",100);
    set_skill("force",60);
    setup();
add_money("silver",15);
}
