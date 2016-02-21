// xuanying_poison.c

#include <ansi.h>

int update_condition(object me, int duration)
{
	me->receive_wound("kee", 10);
	me->receive_damage("sen", 10);
	me->apply_condition("xy_poison", duration - 1);
    message_vision(BLU"$N冷不丁打了个冷战，牙齿格格的响了起来。。。\n"NOR, this_player());
	tell_object(me, HIG "你中的玄阴毒掌的寒毒发作了！\n" NOR );
	if( duration < 1 ) return 0;
	return 1;
}
