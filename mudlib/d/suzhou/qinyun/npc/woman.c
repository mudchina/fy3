// guard.c

#include <ansi.h>

inherit NPC;
int do_change();

void create()
{
	set_name("老夫人",({"lao furen","lao","furen"}));
	set("gender","女性");
	set("age",60);
	set("str",50);
	set("cor", 30);
	set("mingwang",1);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("per",25);
	set("no_get",1);
	set("long",
	"慕容博的叔母，脸上皱文甚多，眼睛迷迷朦朦，似乎已瞧不见东西。
只是身上传来一阵淡淡的幽香，让人觉得很是奇怪。\n"
	);
	set("combat_exp",40000);
	set("attitude","friendly");
	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
	"老夫人叹道：如今这世道奸诈的人太多了。\n",
	"老夫人怒道：慕容家就这么好欺负！？\n",
	}) );
	set("inquiry", ([
	"阿朱" : (: do_change :),
	"a zhu" : (: do_change :),
		"桌子":"这个嘛，我不太清楚，嘻嘻。\n"
			+NOR"这副神气全然是少女的模样，睁着圆圆的眼睛。\n"
			+"乌黑的眼珠骨溜溜一转，随即又垂下眼皮。\n",
		"zhuozi":"这个嘛，我不太清楚，嘻嘻。\n"
			+NOR"这副神气全然是少女的模样，睁着圆圆的眼睛。\n"
			+"乌黑的眼珠骨溜溜一转，随即又垂下眼皮。\n",
	]) );
	set_skill("dodge",50);
	set_skill("unarmed",50);
	set_temp("apply/defense",40);
	set_temp("apply/attack",40);
	setup();
	carry_object("/obj/cloth")->wear();
}
int do_change()
{
	object ob;
	ob=this_player();
	if(present("a zhu",environment()))	{
		tell_object(ob,"旁边站着的不就是吗？\n");
		return 1;
	}
	message_vision("老夫人对着$N轻笑了一声。\n"
			+"说道：没想到还是让你给认了出来。\n"
			+"说罢只见老夫人双手在脸上一抹。\n"
			+"泥巴和面粉堆成的满脸皱纹纷纷跌落。\n"
			+"一个老太太突然变成了一个美丽的少女。\n"
			+"顿时把$N惊的目瞪口呆。\n",ob);
	ob=new(__DIR__"azhu.c");
	ob->move(environment(this_player()));
	destruct(this_object());
return 1;
}
