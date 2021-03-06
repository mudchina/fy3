// zombie.c

#include <ansi.h>

inherit NPC;

void do_bite();

void create()
{
        set_name("僵尸", ({ "jiang shi","zombie" }) );
        set("long",
                
"这是一具被人用符咒控制的僵尸，从它苍白的脸上看不出任何喜怒哀乐。\n");
        set("max_gin", 400);
        set("max_kee", 400);
        set("max_sen", 60);
        set("max_atman", 100);
        set("atman", 100);
        set("max_mana", 100);
        set("mana", 100);
        set("str", 60);
        set("cor", 40);
        set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
                "僵尸口中发出荷荷的叫声。\n",
                "僵尸的脸上开始痉挛，一阵抽搐，发狂似地大叫。\n",
                "僵尸五指箕张，咬牙切齿，露出狰狞的笑容。\n",
                (: do_bite :),
        }) );

        set_temp("apply/damage", 15);

        setup();
}

int is_zombie() { return 1; }

void animate(object me,object who, int lv)
{
        set("master", me);
	set("target",who);
        set_leader(who);
	set("combat_exp",(int)me->query("combat_exp")*2);
	set_skill("unarmed",lv);
	set_skill("parry",lv);
	set_skill("dodge",lv);
}

void die()
{
        object master;

	master=query("master");

        if( environment() ) {
                say( name() + "缓缓地倒了下来，化为一滩血水。\n");
        }
	if(objectp(master))
		tell_object(master,HIR"你控制的"+name()+"消失了！\n"NOR);
        destruct(this_object());
}

int heal_up()
{
	object master;
	object target;

	master=query("master");
	target=query("target");

        if( objectp(master) && master->query("gin")>30 && objectp(target)
	&& master->query("eff_gin")>10
	&& living(target) && target->query("kee")>60)
	{
		message_vision(HIR"$N嘶声道："+target->query("name")+"～～我来啦～～"+
		target->query("name")+"～～我来找你啦～～\n"NOR,this_object());
		tell_object(target,HIR"你只觉得胸口一阵刺痛，好不难受！\n"NOR);
                target->receive_damage("kee", 50);
		   target->receive_wound("kee",10);
		add("max_kee",10);add("eff_kee",10);add("kee",10);
		tell_object(master,HIR"由于控制僵尸，你觉得精力在流失！\n"NOR);
		master->receive_damage("gin",20);
		master->receive_wound("gin",5);
                ::heal_up();
                return 1;               // Always acquire power from master.
        } else {
                call_out("die", 1);
                return ::heal_up();
        } 
}

void do_bite()
{
        object *enemy;

        say( name() + "口中喷出一股中人欲呕的臭气，使你觉得头晕脑胀。\n" );
        enemy = query_enemy();
        for(int i=0; i<sizeof(enemy); i++) {
                if( !enemy[i] ) continue;
                enemy[i]->receive_damage("gin", 20);
                COMBAT_D->report_status(enemy[i], "gin");
        }
}
 
