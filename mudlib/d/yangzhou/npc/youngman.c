// dtz.c

inherit NPC;
int random_action();
void create()
{
        set_name("年青人", ({ "youngman" }) );
        set("gender", "男性" );
        set("age", random(5)+15);
        set("long", "一个单身的年青人，正盼着桃花运的降临。\n");
	set("per",30);
        set("combat_exp", 20000);
        set("attitude", "heroism");
        set_skill("unarmed", 70);
        set_skill("parry", 60);
	set_skill("dodge", 60);
             set_skill("force",50);
        set("force_factor", 12);
        set("chat_chance", 5);
        set("chat_msg", ({
                (: random_action :)
        }) );

	setup();
	add_money("silver", 10);
        carry_object("/obj/cloth")->wear();
        
}

int random_action()
{
switch(random(5)){
	case 0:
		command("smile");
		break;
	case 1:
		command("laugh");
		break;
	case 2:
		command("crazy");
		break;
		}
}
