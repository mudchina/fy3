#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
	int damage;
	string msg;

	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
        return notify_fail("此招仅用于战斗时。\n");

		
    if( (int)me->query_skill("luoyan-sword",1)<80)
    return notify_fail("你的回风落雁剑法不够娴熟，不会使用「万里云罗一雁飞」。\n");
     if( (int)me->query_skill("yuxuan-guizheng",1)<80)
        return notify_fail("你的玉玄归真不够深厚，不能使用「万里云罗一雁飞」。\n"); 
			
    if( (int)me->query("force",1)<200)
    return notify_fail("你现在内力太弱，不能使用「万里云罗一雁飞」。\n");
			
 msg=HIG "$N反手向天斜斜拍出,使出「万里云罗一雁飞」。\n"
HIG "$n只见一团云罗在眼前散开,迷蒙中一道剑影已飞到眼前。\n" NOR;
        if (random(me->query_skill("sword")
+me->query_skill("luoyan-sword")) > (target->query_skill("parry")+
target->query_skill("dodge")/3 ))
{
        me->start_busy(2);
                target->start_busy(random(3));
		
    damage= (int)(me->query_skill("luoyan-sword",1)+me->query_skill("sword")/2);
         damage = damage + random(damage)/2;
		
	target->receive_damage("kee",damage);
	target->receive_wound("kee",damage/3);
	me->add("force",-damage/10);
        if( damage < 40 ) msg += HIY"结果$n被$N刺中了一剑，闷哼一声,衣服片片破碎。\n"NOR;
else
if( damage < 80 ) msg += HIY"结果$n被$N连刺两剑，「啊」地一声拉着裤子退了两步,地上留下两截裤腰带。\n"NOR;
else
if( damage < 100 ) msg += RED"结果$n头发被被$N剃得干干净净,$n受了凉,连打了三十个喷嚏,看来情况不妙！\n"NOR;
else msg += HIR"结果$n被$N的剑透前心，眼前一黑，身子打了几个转儿,躺下了！！\n"NOR;
}
else
{
         me->start_busy(1);
                msg += CYN"可是$p看破了$P的企图，并没有上当。\n"NOR;
}
	message_vision(msg, me, target);

	return 1;
}
