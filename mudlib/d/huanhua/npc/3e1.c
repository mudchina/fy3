inherit NPC;
void create()
{
    set_name("符永祥",({"fu","fuyongxiang"}));
	set("shen_type",-1);
    set("gender","男性");
    set("title","[双刀客]");
    set("combat_exp",5000);
    set("age",36);
    set("str",25);
    set("long","长江三恶之首,朱大天王手下三英之一.\n");
    set_skill("parry",20);
    set_skill("dodge",20);
    set_skill("unarmed",20);
    set_skill("force",25);
    set_skill("blade",40);
    setup();
add_money("silver",2);
carry_object("/d/obj/weapon/blade/blade")->wield();
}
