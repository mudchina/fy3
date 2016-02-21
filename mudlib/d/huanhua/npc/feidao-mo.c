inherit NPC;
void create()
{
    set_name("É³Ç§µÆ",({"sha qiandeng","sha"}));
        set("shen_type",-1);
    set("gender","ÄÐÐÔ");
    set("age",56);
    set("str",26);
    set("title","·Éµ¶ÀÇÄ§");
    set("per",34);
    set("combat_exp",50000);
    set("long","ÌìÀÇÊÉÔÂ£¬°ëµ¶¾øÃü£¬ºìµÆ¹íÓ°£¬Ò»µ¶¶Ï»ê£¡.\n");
    set_skill("parry",60);
    set_skill("dodge",50);
    set_skill("unarmed",60);
    set_skill("force",60);
    set_skill("throwing",100);
    setup();
add_money("silver",15);
carry_object(__DIR__"obj/feidao")->wield();
}
