inherit NPC;
void create()
{
    set_name("左常生",({"zuo changsheng","shenmo","zuo"}));
        set("shen_type",-1);
    set("gender","男性");
    set("age",57);
    set("str",23);
    set("title","一洞神魔");
    set("per",21);
    set("combat_exp",120000);
    set("long","九天十地,十九人魔之一.没人知道为何称他为一洞
神魔,知道的人都死了,他穿得随随便便.\n");
    set_skill("parry",60);
    set_skill("dodge",50);
    set_skill("unarmed",100);
    set_skill("force",60);
    setup();
add_money("silver",15);
}
