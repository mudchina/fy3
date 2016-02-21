// lifeheal.c

#include <ansi.h>

int exert(object me, object target)
{
	if( !target )
		return notify_fail("你要用真气为谁疗伤？\n");

	if( me->is_fighting() || target->is_fighting())
		return notify_fail("战斗中无法运功\疗伤！\n");

	if(me->query_skill("murongxinfa",1)<20)
	return notify_fail("你的慕容心法功力不够，没法疗伤。\n");
	 if( (int)me->query("force")<100)
		return notify_fail("你的真气不够。\n");

	if(target->query("eff_kee")==target->query("max_kee"))
	return notify_fail(target->query("name")+"没有受任何伤！\n");
	if( (int)target->query("eff_kee") < (int)target->query("max_kee") / 5 )
		return notify_fail( target->name() + "已经受伤过重，经受不起你的真气震□！\n");

	message_vision(
		HIY "$N坐了下来运起内功\，将手掌贴在$n背心，缓缓地将真气输入$n体内....\n\n"
		"过了不久，$N额头上冒出豆大的汗珠，$n吐出一口瘀血，脸色看起来红润多了。\n" NOR,
		me, target );

	target->receive_curing("kee", 10 + (int)me->query_skill("force")/3 );
	me->add("force",-100);
	me->set("force_factor", 0);

	return 1;
}
