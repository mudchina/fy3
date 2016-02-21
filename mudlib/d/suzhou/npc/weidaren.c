// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("围大人",({"wei daren","wei"}));

	set("title","苏州巡府");
	set("gender", "男性" );
	set("age",40);
	set("long",
	"面色黝黑，相貌清奇，气度不凡。让你不由自主，好生敬仰。\n"
	);
	set("attitude","friendly");
	setup();
	carry_object(__DIR__"obj/yipinfu")->wear();
}
void init()
{
	::init();
	add_action("do_gao","gao");
}

int do_gao(string str)
{
	object ob,want;
	int number;
	ob=this_player();
	if(!ob->query_temp("oldsix_flag/money")||ob->query_temp("oldsix_flag/money")==0)	{
		command("say 不给钱帮你办事，我们喝西北风不成？");
	return 1;
	}
	if (!str) {
	command("say 你要告谁啊？");
		return 1;
		}
	want=find_player(str);
	if (!want) {
		command("say 没有这么个玩家。");
		return 1;
		}
	if(want->query("oldsix_flag/tongji")==1)	{
		command("say "+want->query("name")+"已在通缉之中了。");
		return 1;
							}
	if(want->query("oldsix_flag/lao")==1)	{
		command("say "+want->query("name")+"早已被本府拘押在大牢内了。");
		return 1;
	}
	number=ob->query_temp("oldsix_flag/money");
	ob->set_temp("oldsix_flag/money",0);
                want->set("oldsix_flag/time2",want->query("mud_age"));
        want->apply_condition("tongji_cancle");
	switch(number) {
		case 0:
		case 1:	{
	want->set("oldsix_flag/tongji",1);
	want->set("oldsix_flag/long",3);
	command("say 好吧，立刻通缉"+want->query("name")+"。");
	command("rumor 三号通缉令：追捕"+want->query("name")+"。");
		return 1;
				}
		case 2: {
	want->set("oldsix_flag/tongji",1);
	want->set("oldsix_flag/long",2);
	    command("say 好吧，立刻通缉"+want->query("name")+"。");
	command("rumor 二号通缉令：追捕"+want->query("name")+"。");
	return 1;
			}
	case 3:	{
	want->set("oldsix_flag/tongji",1);
	want->set("oldsix_flag/long",1);
	 command("say 好吧，立刻通缉"+want->query("name")+"。");
	command("rumor 一号通缉令：追捕"+want->query("name")+"。");
	return 1;
			}

}
}
int accept_object(object who,object item)
{	
	if(item->query("money_id") &&
	item->value()>=1000)
	{
	command("say 钱我就收下了，请把名单程上来。");
	if(item->value()<10000)	who->set_temp("oldsix_flag/money",1);
	else 
	if(item->value()<50000)	who->set_temp("oldsix_flag/money",2);
	else who->set_temp("oldsix_flag/money",3);
		return 1;
	}
	command("say 老夫虽非钱开眼，但这些东西本府实在不感兴趣。\n");
	return 0;
}
