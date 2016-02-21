// dizi.c

inherit NPC;

void create()
{
	int skill;

	set_name("杂耍艺人", ({ "yiren", "zhasua"}) );
	set("gender", "男性" );
	set("age", 20+random(30));
	set("combat_exp",10000+random(30000));
       set_skill("parry",20+random(40));
	set_skill("dodge", 20+random(40));
	set_skill("unarmed", 20+random(40));
        set("chat_chance", 8);
        set("chat_msg", ({
                "我这路刀,有个名目,叫作五虎断门刀!\n",
                "各位夫老乡亲,有钱的帮个钱场,没钱的帮个人场.\n",
                "在下初到宝地,给大家玩一趟刀!\n",
                "杂耍艺人拉开架式,呼呼呼呼地舞了一趟刀.\n",
        }) );

	setup();
	carry_object("/obj/cloth")->wear();
       carry_object("/d/quanzhou/obj/blade")->wield();
            add_money("silver",5);
}
