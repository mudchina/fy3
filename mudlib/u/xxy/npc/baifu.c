// baifu.c 百夫长  16/6/98 

inherit NPC;
#include "/d/huanggon/quest/who.h"
void create()
{
	set_name("蒙古百夫长", ({ "baifu","zhang" }));
	set("age", random(15)+20);
	set("gender", "男性");
	set("long", "身披重甲,悍不畏死\n");
	set("attitude", "peaceful");
	
	set("combat_exp", random(20000)+30000);

	set_skill("unarmed", 80);
	set_skill("dodge", 80);
	set_skill("parry", 80);
	set_skill("blade", 80);
	set_temp("apply/attack", 80);
	set_temp("apply/defense", 80);
	set_temp("apply/damage", 80);
	set_temp("apply/armor", 80);

    set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
		"百夫长高叫道:整队了,...都给我立正.....听我来给你们训话!\n",
		"百夫长大声道:王爷的话就是圣旨,就是命令,我们要为王爷而战.\n",
	}));
	
	setup();
	carry_object("obj/weapon/blade")->wield();
	carry_object("obj/cloth")->wear();
}
void init()
{
add_action("re_name","ddd");
}
void do_ddd()
{
say ("hi,how are you");
}
void re_name()
{
mapping num;
num=who[random(sizeof(who))];
this_object()->set_name(num["name"],({num["id"]}));
call_out("re_name",10);
}
