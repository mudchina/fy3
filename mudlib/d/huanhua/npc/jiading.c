inherit NPC;
void create()
{
    set_name("家丁",({"jia ding"}));
    set("gender","男性");
    set("combat_exp",1000);
    set("attitude","friendly");
    set("age",37);
    set("long","一个罗帽直身的家仆.\n");
    set_skill("unarmed",10);
    setup();
add_money("coin",30);
carry_object("/obj/cloth")->wear();
}
