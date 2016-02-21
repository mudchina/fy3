// animal: yetu.c野兔 by ksusan 8/03/97 8:30

#include <ansi.h>
inherit NPC;

void create()
{
		set_name("野兔", ({ "yetu", "tu" }) );
        set("race", "野兽");
        set("age", 2);
        set("long", "一只肥肥的灰色野兔，你开始流口水了。。。\n");
        set("attitude", "peaceful");

		set("no_corpse",1);
		set("mingwang",0);
        set("str", 26);
        set("cor", 30);

        set("limbs", ({ "头部", "身体", "前腿","后腿" "尾巴" }) );
        set("verbs", ({ "bite","claw" }) );

        set("combat_exp", 500);

        set_temp("apply/attack", 10);
        set_temp("apply/damage", 4);
        set_temp("apply/armor", 1);

        setup();

}
void init()
{
        object ob;
        ::init();
        if (interactive(ob = this_player()) &&
                random(ob->query_kar() + ob->query_per()) < 30) {
						write("野兔看见有人过来警惕的竖起了耳朵！\n");
//                        remove_call_out("kill_ob");
//                        call_out("kill_ob", 1, ob); 
        }
}

void die()
{
        object ob;
        ob = new(__DIR__"obj/turou");
	message_vision("野兔倒在地上，身体抽畜了几下死了！\n",this_object());
        ob->move(environment(this_object()));
        destruct(this_object());
}

