inherit NPC;
void create()
{
    set_name("左丘超然",({"zuo qiu","chaoran"}));
        set("shen_type",1);
    set("gender","男性");
    set("attitude","friendly");
    set("combat_exp",10000);
    set("age",24);
    set("spi",23);
    set("per",22);
    set("kar",21);
    set("str",26);
    set("long","左丘精通各路擒拿手,是萧秋水的死党.\n");
    set_skill("parry",30);
    set_skill("dodge",30);
    set_skill("unarmed",70);
    set_skill("force",30);
    set_skill("literate",30);
    setup();
add_money("silver",5);
}
