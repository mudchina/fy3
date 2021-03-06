#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
    int damage;
    string msg;
    object weapon;

    if (!target ) target = offensive_target(me);
    if (me->query_temp("weapon")||me->query_temp("second_weapon"))
        return notify_fail("空手才能使用[血手印]之法.\n");
    if (!target || !target->is_character() || !me->is_fighting(target) )
        return notify_fail("「血手印」只能对战斗中的对手使用。\n");
    if ((int)me->query_skill("youming-zhang", 1) < 80 )
        return notify_fail("你[幽冥血掌]功夫还不到家，使不出「血手印」。\n"NOR);
    if ((int)me->query_skill("guiyingmizong",1)<50 )
        return notify_fail("你[鬼影迷踪]火候不够，使不出「血手印」。\n");
    
    msg = HIC"$N一声狞笑,双掌突然变的"+NOR+RED+"血红"+NOR+HIC+"交错拍向$n,\n"NOR;
    if ( random(me->query_skill("unarmed")+me->query_skill("dodge"))
     > (int)target->query_skill("parry"))
    {
        me->start_busy(2);
        target->start_busy(random(3));
        damage =me->query("PKS");
      if (damage>100)  damage=(int)(1000/damage);
        damage=random(damage)*(me->query_skill("youming-zhang",1)/20);
	target->receive_damage("kee",damage,me);
	target->receive_wound("kee",damage/2,me);
      msg+=HIC"$n魂飞魄散之下,只觉身上一阵炽热,已被$N击中!\n"NOR;
	message_vision(msg,me,target);
      if (random(me->query("kar"))>target->query("kar")/2)   {
      target->apply_condition("youming",1+random(20));
	tell_object(target,HIR"你中了[血手印]的掌毒.\n"NOR);
          }
    } else
    {
        me->start_busy(2);
	msg+=HIY"可是$n脚下倒踩七星,巧妙地避开了这招.\n"NOR;
	message_vision(msg,me,target);
    }
    if(!target->is_fighting(me)) target->fight_ob(me);
    return 1;
}
