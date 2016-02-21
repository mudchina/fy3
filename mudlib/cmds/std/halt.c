// halt.c
// By Xiang@XKX (12/17/95)

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	if((int)me->query_temp("pending/exercise") != 0) {
		message_vision("$N把正在运行的真气强行压回丹田，站了起来。\n", me);
                me->interrupt_me();
		return 1;
        }
	if( me->is_fighting())	{
		if(wizardp(me))	{
        me->remove_all_killer();
        message_vision("$N用巫师的神力停止了这场打斗。\n", me);
        write("Ok.\n");
        return 1;
   }
	else if(me->is_busy())
		return notify_fail("你正被对手缠着，无法停止战斗！\n");
	else	{
		me->remove_all_enemy();
                message_vision("$N身行向后一跃，跳出战圈不打了。\n", me); 
		return 1;
	}
	}
	if(!me->is_busy())
		return notify_fail("你现在不忙。\n");
//	else if ((int)me->query_temp("pending/respirate") != 0)
//		me->interrupt_me();
//	me->interrupt_me();
	else return notify_fail("你正忙着应付某件事情，无法停下来。\n");
}
	
int help(object me)
{
   write(@HELP
指令格式: halt

可以停止与你(□)有关的战斗。
HELP
   );
   return 1;
}
    
