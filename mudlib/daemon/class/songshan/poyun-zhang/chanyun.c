#include <ansi.h>

inherit SSERVER;

int perform(object me, object target)
{
        string msg;
        int skill, damage, rir;
        string classname;
        classname = me->query("family/family_name");
        if(classname!="嵩山派")
                 return notify_fail("你不是嵩山派的弟子，不能使用缠云手！\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("缠云手 只能对战斗中的对手使用。\n");
         if( ( skill = (int)me->query_skill("poyun-zhang",1)) < 30)
                return notify_fail("你的破云掌修为不够,目前还不能使用缠云手。\n");
        if( (int)me->query("force")< 80 )
                return notify_fail("你的内力不够。\n"); 
        msg = HIW "使出破云掌的绝技「缠云手」，双掌蓦地拍向$n的全身要穴 \n" NOR;
        message_vision(msg, me, target);
        rir = target->query_skill("parry",1),
        me->start_busy(2);
        me->add("force", -100);
        me->add("sen", -30);
         if( random(me->query("combat_exp")*(skill/30+1)) > (int)target->query("combat_exp")*(rir/50+1)) 
        {
           {     
          msg =HIW "$N结果被你狂风暴雨般的双掌拍中要穴，立时真气大散！\n" NOR;
        damage =40+random((int)me->query("str") * (int)me->query_skill("unarmed") /10);
         message_vision(msg,target);
         target->receive_damage("kee",damage);
           } 
          COMBAT_D->report_status(target);
          return 1;
         }else {
                msg += HIG "结果$p看破了$P的企图，身行后跃，并没有上当。\n" NOR;

        }
        message_vision(msg, me, target);
        return 1;
}








