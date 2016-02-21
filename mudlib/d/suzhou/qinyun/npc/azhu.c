// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("阿朱",({"a zhu","zhu","a"}));
	set("gender","女性");
	set("age",16);
	set("str",50);
	set("cor", 30);
	set("mingwang",1);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("per",30);
	set("no_get",1);
	set("long",
	"慕容复的小丫环。一脸精灵顽皮的神气。眼珠灵动，另有一股动人气韵。\n"
	);
	set("combat_exp",50000);
	set("attitude","friendly");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"阿朱皱眉道：我有什么地方得罪了你？还请明言。\n",
	"阿朱怒道：慕容家的丫环不是好惹的！\n",
	}) );
	set("inquiry", ([
		"桌子" :"这个嘛，你可以试着再移动移动。\n",
		"zhuozi":"这个嘛，你可以试着再移动移动。\n",
		"燕子坞" : "这里就是啊。\n",
		"yanziwu":"这里就是啊。\n",
	]) );
	set_skill("dodge",50);
	set_skill("unarmed",50);
	set_temp("apply/defense",40);
	set_temp("apply/attack",45);
	set_temp("apply/armor",40);
	setup();
	carry_object("/obj/cloth")->wear();
}
