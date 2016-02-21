// regenerate.c

//inherit SSERVER;

int exert(object me, object target)
{
	if (target != me) 
	return notify_fail("你只能用内功恢复自己的神彩。\n");
	if(me->query("sen")==me->query("eff_sen"))
	return notify_fail("你现在神彩飞扬的很哪！\n");
	if ((int)me->query("force") <20)
		return notify_fail("你的内力不够。\n");

	me->add("force",-20);
	me->receive_heal("sen",(int)me->query_skill("force") / 3);
	
	message_vision("$N深深吸了几口气，神色看起来好多了。\n", me);

        if( me->is_fighting() ) me->start_busy(1);
	
	return 1;
}

