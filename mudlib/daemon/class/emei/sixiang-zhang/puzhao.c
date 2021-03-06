//zhao.c 佛光普照
#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
    int damage;
    string msg;
    object weapon;

    if (!target ) target = offensive_target(me);
    if (me->query_temp("weapon")||me->query_temp("second_weapon"))
        return notify_fail("空手才能使用[佛光普照].\n");
    if (!target || !target->is_character() || !me->is_fighting(target) )
        return notify_fail("「佛光普照」只能对战斗中的对手使用。\n");
    if ((int)me->query_skill("sixiang-zhang", 1) < 80 )
        return notify_fail("你[四象掌]功夫还不到家，使不出「佛光普照」。\n"NOR);
    if ((int)me->query_skill("emei-xinfa",1)<50 )
        return notify_fail("你[峨眉心法]火候不够，使不出「佛光普照」。\n");
    if ((int)me->query_skill("anying-fuxiang",1)<70 )
        return notify_fail("你[暗影浮香]火候不够，使不出「佛光普照」。\n");
 
   
    msg ="突然间,$N全身骨骼中发出劈劈啪啪的轻微爆裂之声，\n炒豆般的响声未绝，右掌已向$n胸口击去,\n"NOR;
    if ( random(me->query_skill("unarmed")+me->query_skill("dodge"))
     > (int)target->query_skill("parry"))
    {
    me->start_busy(1);
    target->start_busy(random(3));
    damage = (int)me->query_skill("emei-xinfa", 1);
    damage = damage +  (int)me->query_skill("anying-fuxiang", 1);
    damage = damage +  (int)me->query_skill("sixiang-zhang", 1);
    target->receive_damage("kee", damage);
    target->receive_wound("kee", damage/2);
    me->add("force", -damage);
    msg+=HIC"$n胸口犹似受了铁锤的一击,哇的一声，喷出一口鲜血!\n"NOR;
    } else
   {
    me->start_busy(1);
    msg+=HIY"可是$n向后接连翻了三个筋斗,巧妙地避开了这招.\n"NOR;
    }
    message_vision(msg,me,target);

    return 1;
}
