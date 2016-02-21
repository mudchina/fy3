#include <ansi.h>
inherit F_CLEAN_UP;
void remove_effect(object me, int amount);
int exert(object me, object target)
{
        int skill;
        if( target != me ) return 
notify_fail("你只能用蛤蟆功提升自己的战斗力。\n");
        if( (int)me->query("force") < 500 )     return 
notify_fail("你的内力不够。\n");
        if( (int)me->query_temp("powerup") ) return 
notify_fail("你已经在运功中了。\n");
        skill = me->query_skill("force");
        me->add("bellicosity", 100 + skill/2 );
        me->add("force", -500);
        me->add("force", -skill/10);
        me->receive_damage("kee", skill/10);
        message_vision(
                HIR 
"$N脸上泛过一层碧绿色,身上衣衫如鼓风般扬起!\n" NOR, me);
        me->add_temp("apply/attack", skill/6);
        me->add_temp("apply/dodge", skill/5);
        me->set_temp("powerup", 1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, 
skill/4 :), skill);
        if( me->is_fighting() ) me->start_busy(2);
        return 1;
}
void remove_effect(object me, int amount)
{
        me->add_temp("apply/attack", - amount);
        me->add_temp("apply/dodge", - amount);
        me->delete_temp("powerup");
        tell_object(me, "你的蛤蟆功运行完毕，将内力收回丹田。\n");
}

