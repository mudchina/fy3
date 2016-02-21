// xuan.c  旋字诀

#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
        object weapon;
        int damage;
        string msg;

        if( !target ) target = offensive_target(me);

        if( !target || !target->is_character() || !me->is_fighting(target) )
                return notify_fail("「旋字诀」只能对战斗中的对手使用。\n");

        if (!objectp(weapon = me->query_temp("weapon"))
        || (string)weapon->query("skill_type") != "sword")
                return notify_fail("你使用的武器不对。\n");
                
        if( (int)me->query_skill("huifeng-jian", 1) < 50 )
                return notify_fail("你的回风拂柳剑法不够娴熟，不会使用「旋字诀」。\n");
                                
        if( (int)me->query_skill("emei-xinfa", 1) < 50 )
                return notify_fail("你的峨眉心法不够高，不能用来反震伤敌。\n");
                        
        if( (int)me->query("force", 1) < 100 )
                return notify_fail("你现在内力太弱，不能使用「旋字诀」。\n");
                        
        msg = CYN "$N微微一笑，猛吸一口气,欲使出以气驭剑绝技攻击$n。\n"NOR;
        if (random(me->query_skill("force")) > target->query_skill("force")/6 )
        {
                target->start_busy( (int)me->query_skill("huifeng-jian") / 30 + 1);
                
                damage = (int)me->query_skill("emei-xinfa", 1);
                damage = damage +  (int)me->query_skill("emei-xinfa", 1);
                damage = damage +  (int)me->query_skill("huifeng-jian", 1);
                target->receive_damage("kee", damage);
                target->receive_wound("kee", damage/2);
                me->add("force", -damage);
                msg += HIR"只见$N手中剑光腾空而起,绕着$n越旋越快，越旋越小,\n一股煞气从四周袭向$n,$n惨叫一声，只觉胸腹后背一圈划伤，鲜血淋漓！！\n"NOR;
                me->start_busy(1);
        } else 
        {
                msg += CYN"可是$p猛地向上一纵，跳出了$P的攻击范围。\n"NOR;
                me->add("force", -100);
                me->start_busy(1);
        }
        message_vision(msg, me, target);

        return 1;
}


