// zhen.c 太极拳「震」字诀

#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
	int damage;
	string msg;

	object thing,*inv;
	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
	return notify_fail("探云手只能对战斗中的对手使用。\n");

		
	if( (int)me->query_skill("murongquanfa",1)<10)
	return notify_fail("你的慕容拳法不够娴熟，不会使用「探云手」。\n");
	if( (int)me->query_skill("murongshenfa",1)<10)
	return notify_fail("你的慕容身法不够敏捷，不能使用「探云手」。\n");
	if( (int)me->query("force",1)<50)
	return notify_fail("你现在内力太弱，不能使用「探云手」。\n");
			
	msg = CYN "$N突然身形一展，使出「探云手」向$n怀中伸去！\n"NOR;

	if(random(me->query_skill("dodge"))>target->query_skill("dodge")/2)
	{
	me->start_busy(3);
		target->start_busy(random(3));
		
	me->add("force",-random(10));
	inv=all_inventory(target);
	if(!sizeof(inv))	{
		msg +=CYN"$n身上空空如也，$N什么也没「探」到！\n"NOR;
	}
	else	{
		thing=inv[random(sizeof(inv))];
		thing->move(me);
	msg +=CYN"$N妙手空空，从$n身上得到"+thing->query("unit")+thing->query("name")+"！\n"NOR;
	}
	} else 
	{
		me->start_busy(1);
	msg += CYN"可是$p看破了$P的企图，身形一晃闪了开去。\n"NOR;
	}
	message_vision(msg, me, target);

	return 1;
}
