// guard.c

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("唐光雄",({"tang guangxong","tang","guangxong"}));
	set("title","无量剑派弟子");
	set("gender", "男性" );
	set("age",20);
	set("str",30);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",30);
	set("long",
		"王夫人捉来的大理人，正要被活埋祭花。\n"+
		"双手给反绑了，垂头丧气。\n"+
		"你考虑了一下，倒底要不要救他(jiu)。\n"
	);
	set("combat_exp",5000);
	set("attitude","hero");
	set_skill("parry",20);
	set_skill("dodge",20);
	set_skill("unarmed",20);
	setup();
	carry_object("/obj/cloth")->wear();
}
void init()
{
object ob;
        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
		}
	add_action("do_kill","kill");
	add_action("do_kill","hit");
	add_action("do_jiu","jiu");
}
int do_jiu()
{
	object me;
	me=this_player();
	message_vision(CYN"$N走上前去，将反绑的唐光雄救了出来。\n"NOR,me);
	message_vision(CYN"唐光雄奸笑两声说道：多谢"+RANK_D->query_respect(me)+
	"救命之恩。\n"+"这份恩德只有来生再报啦。\n说罢，唐光雄脚底抹油一溜烟的不见了。\n"NOR,me);
	message_vision(RED"\n\n这时楼中冲出两人，对着$N大喝一声。\n"NOR,me);
	call_out("kill_me",1,me);
	return 1;
}
void kill_me(object me)
{
	object ob;
	ob=new(__DIR__"xiaocui.c");
	ob->move(environment());
	ob->kill_ob(me);
	ob=new(__DIR__"xiaolan.c");
	ob->move(environment());
	ob->kill_ob(me);
	destruct(this_object());
}
int do_kill(string str)
{
	object me,npc;
	me=this_player();
	npc=present(str,environment());
	if(npc==this_object())	{
	message_vision(CYN"唐光雄对$N怒道：我这个样子还怎么陪你练功！\n"NOR,me);
		return 1;
			}
	return 0;
}
void greeting(object ob)
{
 	if( !ob || environment(ob) != environment() ) return;
	message_vision(CYN"唐光雄哭丧着脸说道：这位"+RANK_D->query_respect(ob)+
	"快救兄弟我一把。\n"NOR,ob);
}
int accept_fight(object me)
{
	message_vision(CYN"唐光雄对$N怒道：我这个样子还怎么陪你练功！\n"NOR,me);
	return 0;
}
