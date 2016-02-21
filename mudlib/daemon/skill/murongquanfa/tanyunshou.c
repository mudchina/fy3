// 慕容拳法之探云手 by oldsix
//modify by ksusan 7/29/97 16:55

#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
	string msg;
	int k;
	object thing,*inv;
	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
	return notify_fail("探云手只能对战斗中的对手使用。\n");

		
	if( (int)me->query_skill("murongquanfa",1)<20)
	return notify_fail("你的慕容拳法不够娴熟，不会使用「探云手」。\n");
	if( (int)me->query_skill("murongshenfa",1)<20)
	return notify_fail("你的慕容身法不够敏捷，不能使用「探云手」。\n");
	if( (int)me->query("force")<100)
	return notify_fail("你现在内力太弱，不能使用「探云手」。\n");
	if(me->query("kee")<50)
	return notify_fail("你现在气不足，无法使用「探云手」。\n");
	if(me->query_temp("have_pfm"))
	return notify_fail("你刚展施完特殊招式，内息还没调整过来。\n");
	me->set_temp("have_pfm",1);
	msg = CYN "$N突然身形一展，使出「探云手」向$n怀中伸去！\n"NOR;
	k=me->query("oldsix_flag/tanyunshou");
	if(!k||k==0)	k=2;
	if(random(me->query("combat_exp"))>target->query("combat_exp")/k)	{
		
	me->add("force",-random(10));
	me->add("kee",-20-random(20));
	inv=all_inventory(target);
		if(!sizeof(inv))	{
			msg +=CYN"$n身上空空如也，$N什么也没「探」到！\n"NOR;
		}
		else	{
			thing=inv[random(sizeof(inv))];
		if( (thing->query("equipped")&&random(me->query("cor"))<20)
		|| (int)thing->query("no_steal"))
		msg +=CYN"$n双手紧紧抓住"+thing->query("name")+"没让$N得逞！\n"NOR;
	else 	{
		if(thing->query("equipped"))	thing->unequip();
		thing->move(me);
		msg +=CYN"$N妙手空空，从$n身上得到"+thing->query("unit")+thing->query("name")+"！\n"NOR;
	}
			}
	} else 
		{
		me->add("force",-5);
		me->start_busy(1);
		msg += CYN"可是$p看破了$P的企图，身形一晃闪了开去。\n"NOR;
		}
	message_vision(msg, me, target);
	call_out("do_reset",5,me);
	return 1;
}

void do_reset(object me)
{
        if( !objectp(me))       return;
        if( (int)me->query_temp("have_pfm"))
                me->delete_temp("have_pfm");
}
