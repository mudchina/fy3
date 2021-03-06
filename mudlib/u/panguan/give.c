// give.c
#include <ansi.h>
//modify by jackyboy @cctx 98/12/29 for quest type "寻" & "送"
#define CMDS_NICK "/cmds/usr/nick"
inherit F_CLEAN_UP;

int do_give(object me, object obj, object who);

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
	string target, item;
	object obj, who, *inv, obj2;
	int i, amount;

	if(!arg) return notify_fail("你要给谁什么东西？\n");

	if( sscanf(arg, "%s to %s", item, target)==2
	|| sscanf(arg, "%s %s", target, item)==2 );
	else return notify_fail("你要给谁什么东西？\n");

	if(!objectp(who = present(target, environment(me))) || !living(who))
		return notify_fail("这里没有这个人。\n");

	if(sscanf(item, "%d %s", amount, item)==2) {
		if( !objectp(obj = present(item, me)) )	
			return notify_fail("你身上没有这样东西。\n");
		if( obj->query("no_drop") )
			return notify_fail("这样东西不能随便给人。\n");
		if( !obj->query_amount() )	
			return notify_fail( obj->name() + "不能被分开给人。\n");
		if( amount < 1 )
			return notify_fail("东西的数量至少是一个。\n");
		if( amount > obj->query_amount() ) 
			return notify_fail("你没有那么多的" + obj->name() + "。\n");
		else if( amount == (int)obj->query_amount() )
			return do_give(me, obj, who);
		else {
			obj->set_amount( (int)obj->query_amount() - amount );
			obj2 = new(base_name(obj));
			obj2->set_amount(amount);
			if (do_give(me, obj2, who))
				return 1;
			else {
				obj->set_amount((int)obj->query_amount() + amount);
				return 0;
			}
		}
	}

	if(arg=="all") {
		inv = all_inventory(me);
		for(i=0; i<sizeof(inv); i++) {
			do_give(me, inv[i], who);
		}
		write("Ok.\n");
		return 1;
	}

	if(!objectp(obj = present(item, me)))
		return notify_fail("你身上没有这样东西。\n");
	return do_give(me, obj, who);
}

int do_give(object me, object obj, object who)
{
	mapping quest;
	int exp, pot, score, bonus,factor;
/*
	write("开始判断是否是任务:\n");
	(interactive(me))?write("interactive(me) is 1\n"):write("interactive(me) is 0\n");
	(quest=me->query("quest"))?write("quest query ok!\n"):write("quest query fail!\n");
	(me->query("task_time")>=time())?write("time enough!\n"):write("time not enough!\n");
	(quest["quest_type"]=="寻"||quest["quest_type"]=="送")?
		write("quest type is not kill!\n"):write("quest type is kill!\n");
	(quest["quest_obj_name"]==obj->query("name"))?write("obj name match!\n")
		:write("obj name is not match!\n");
	(obj->id(quest["quest_obj_id"]))?write("obj id match!\n"):write("obj id not match!\n");
	(quest["quest_npc_name"]==who->query("name"))?write("npc name match!\n")
		:write("npc name is not match!\n");
	(who->id(quest["quest_npc_id"]))?write("npc id match!\n"):write("npc id not match!\n");
*/
//在这里加上判断寻和送的任务完成奖励
//quest program begain....
//在判断的时候对名字进行了ANSI颜色代码去除处理！但是对id()和name()还无法处理
	if(
		interactive(me) 
		&& (quest = me->query("quest"))
		&& (me->query("task_time") >= time())
		&&(quest["quest_type"]=="寻"||quest["quest_type"]=="送")
		&&(quest["quest_obj_name"]==CMDS_NICK->replace_color(obj->query("name"),0))
		&&(obj->id(quest["quest_obj_id"]))
		&&(quest["quest_npc_name"]==CMDS_NICK->replace_color(who->query("name")))
		&&who->id(quest["quest_npc_id"])
	)
	{
		if( obj->move(who) ) 
		{
			printf("你给%s一%s%s。\n", who->name(), obj->query("unit"),
				obj->name());
			message("vision", sprintf("%s给你一%s%s。\n", me->name(),
				obj->query("unit"), obj->name()), who );
			message("vision", sprintf("%s给%s一%s%s。\n", me->name(), who->name(),
				obj->query("unit"), obj->name()), environment(me), ({me, who}) );
			me->save();
			destruct(obj);
		}
		else 
			return 0;
		tell_object(me,"恭喜你！你又完成了一项任务！\n");
		exp = quest["exp"]/2 + random(quest["exp"]/2);
		pot = quest["pot"]/2 + random(quest["pot"]/2);
		score = quest["shen"]/2 + random(quest["shen"]/2);
		exp=(exp==0)?1:exp;
		pot=(pot==0)?1:pot;
		score=(score==0)?1:score;
		factor=who->query("quest_factor");
		if (factor)
		{
			exp=exp*factor/10;
			pot=pot*factor/10;
			score=score*factor/10;
		}
		bonus = (int) me->query("combat_exp");
		bonus += exp;
		me->set("combat_exp", bonus);
		bonus = (int) me->query("potential");
		bonus = bonus + pot;//不让潜能受上限限制only in quest system!
		//if( bonus > 100) bonus = 100;
		me->set("potential", bonus );
		bonus = (int)me->query("shen");
		if(bonus >= 0)
			bonus += score;
		else
			bonus -= score;
		me->set("shen", bonus);
		tell_object(me,HIW"你被奖励了：\n" +
	       	chinese_number(exp) + "点实战经验\n"+
      			chinese_number(pot) + "点潜能\n" +
	       	chinese_number(score)+"点神。\n"
			NOR	);
		me->set("quest", 0 );
		return 1;
	}
//quest program end!

	if( obj->query("no_drop") )
		return notify_fail("这样东西不能随便给人。\n");
	if( !interactive(who) && !who->accept_object(me, obj) )
		return notify_fail("对方并不接受这样的东西。\n");
	if( who->query("env/no_accept"))
		return notify_fail("对方现在不接受别人的馈赠。\n");

	if( !userp(who)&& obj->value() ) {
		message_vision("$N拿出" + obj->short() + "给$n。\n", me, who);
		destruct(obj);
		me->save();
		return 1;
	} else if( obj->move(who) ) {
		printf("你给%s一%s%s。\n", who->name(), obj->query("unit"),
			obj->name());
		message("vision", sprintf("%s给你一%s%s。\n", me->name(),
			obj->query("unit"), obj->name()), who );
		message("vision", sprintf("%s给%s一%s%s。\n", me->name(), who->name(),
			obj->query("unit"), obj->name()), environment(me), ({me, who}) );
		me->save();
		return 1;
	}
	else return 0;
}
int help(object me)
{
write(@HELP
指令格式 : give <物品名称> to <某人>
      或 : give <某人> <物品名称>
 
这个指令可以让你将某样物品给别人, 当然, 首先你要拥有这样物品.
 
HELP
    );
    return 1;
}
