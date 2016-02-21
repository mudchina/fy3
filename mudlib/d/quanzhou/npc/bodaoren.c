#include <ansi.h>
inherit NPC;

void create()
{
	int skill;

	set_name("跛足道人", ({ "daoren", "daoshi"}) );
	set("gender", "男性" );
	set("age", 40+random(40));
	set("long", "跛足蓬头,疯疯癫癫的一个道人。\n");

	set("combat_exp",100000+random(200000));
       set_skill("parry",90);
       set_skill("literate",120);
	set_skill("dodge", 90);
	set_skill("unarmed", 90);
        set("chat_chance", 12);
        set("chat_msg", ({
                HIC+"世人都晓神仙好,惟有功名忘不了!
  古今将相在何方?荒冢一堆草没了.\n"+NOR,
                HIC+"世人都晓神仙好,只有金银忘不了!
  终朝只恨聚无多,及到多时眼闭了.\n"+NOR,
                HIC+"世人都晓神仙好,只有姣妻忘不了!
  君生日日说恩情,君死又随人去了.\n"+NOR,
                HIC+"世人都晓神仙好,只有儿孙忘不了!
  痴心父母古来多,孝顺儿孙谁见了?\n"+NOR,
        }) );

	setup();
	carry_object("/d/quanzhou/obj/podaopao")->wear();
            add_money("gold",3);
}