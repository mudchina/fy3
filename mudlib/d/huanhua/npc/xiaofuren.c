inherit NPC;
void create()
{
    set_name("Ëï»ÛÉº",({"sun huisan","furen","woman"}));
        set("shen_type",1);
    set("gender","Å®ÐÔ");
    set("age",43);
    set("str",26);
    set("title","Ïô·òÈË");
    set("per",43);
    set("combat_exp",70000);
    set("long","ä½»¨½£ÅÉÕÆÃÅÏôÎ÷Â¥Ö®ÆÞ.\n");
    set_skill("parry",60);
    set_skill("dodge",90);
    set_skill("unarmed",90);
    set_skill("force",70);
    set_skill("sword",90);
    setup();
add_money("silver",15);
carry_object("/d/obj/weapon/sword/changjian")->wield();
}
