//tianyu-qijian
#include <ansi.h>
#include <combat.h>
inherit SSERVER;
int perform(object me, object target)
{
        string msg;
        int extra;
        object weapon;
        extra = me->query_skill("tianyu-qijian",1);
        if ( extra < 80) return notify_fail("你的天羽奇剑还不够纯熟！\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("［天羽狂舞］只能对战斗中的对手使用。\n");
        if ((int)me->query("force")<150)
                return notify_fail("你的内力不够。\n"); 
        me->add("force",-150);
        weapon = me->query_temp("weapon");
        message_vision(HIM"$N使出天羽奇剑中的绝招［天羽狂舞］，一招连环六剑，手中的"+weapon->name()+"闪电般向$n攻出第一剑！\n\n" NOR,me,target);        
        if (random(me->query("combat_exp"))>(int)target->query("combat_exp")/2 ) 
        {
        COMBAT_D->do_attack(me,target, weapon); 
        message_vision(HIY"第二剑！\n" NOR,me,target);
        COMBAT_D->do_attack(me,target, weapon);
        message_vision(HIY"第三剑！\n" NOR,me,target);
        COMBAT_D->do_attack(me,target, weapon);
        message_vision(HIY"第四剑！\n" NOR,me,target);
        COMBAT_D->do_attack(me,target, weapon);
        message_vision(HIY"第五剑！\n" NOR,me,target);
        COMBAT_D->do_attack(me,target, weapon);
        message_vision(HIY"最后一剑！\n" NOR,me,target);
        COMBAT_D->do_attack(me,target, weapon);
        
        
        message_vision(WHT"$N连出六剑，结果$n被攻了个手忙脚乱！\n" NOR,me,target);
        me->start_busy(3);
        } else { 
                message_vision(HIC"可是$n看破了$N的招式,趁机发动进攻！\n" NOR,me,target);
                me->start_busy(2);
        }        
        return 1;
}
