//yanyuan
#include <ansi.h>
inherit NPC;
void create()
{
	set_name("男演员", ({ "yanyuan","woman"}));
	set("gender", "男性");
	set("age", 18);
	set("long", "戏院里的演员,演小生的。\n");
	
 	set("per" ,30);
	set("combat_exp",1500);
	set("mingwang",-1);
	set("attitude", "peaceful");
	 

	set_skill("unarmed", 10);
	set_skill("dodge", 30);
	set_temp("apply/attack", 5);
	set_temp("apply/defense",30);
	setup();
	carry_object("/obj/cloth")->wear();
        add_money("silver",5); 
}
void init()
{
        object ob;
        ob = this_player();
        ::init();
        if( interactive(ob) && !is_fighting() )
               {
                        remove_call_out("greeting");
                        call_out("greeting", 1, ob);
                }
}
void greeting(object ob)
{
	if(ob->query("per")>=30 && ob->query("gender")=="女性")   
	say(HIY"男演员冲你一笑，说到："+ RANK_D->query_respect(ob)+"我看你面色桃花，做我们这行肯定能红\n"NOR);
}
 
