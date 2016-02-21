//tanzhi 
#include <ansi.h>
inherit SSERVER;
int perform(object me, object target)
{
        string msg;
        int skill, damage;
        string classname;
        classname = me->query("family/family_name");
        if(classname!="大理段家")
                return notify_fail("你不是大理段家的弟子，怎么能使用一阳指。\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("一阳指只能对战斗中的对手使用。\n");
        if( ( skill = (int)me->query_skill("yiyang-zhi",1)) < 80)
                return notify_fail("你的一阳指似乎还没修炼到火候。\n");
        if( (int)me->query("force")< 300 )
                return notify_fail("你的内力不够。\n"); 
        msg = HIR "$N微一凝神, 气走任督, 左手握出环字决. 右手点出一指攻向$n \n" NOR;
        message_vision(msg, me, target);
        me->start_busy(1);
        me->add("force", -300);
         if( random(me->query("combat_exp")*skill/30) > (int)target->query("combat_exp")*7/2 ) 
        {
           {     
         msg =HIR "$N被攻击的手足无措，指力直透$N丹田穴！\n" NOR;
         damage =40+random((int)me->query("spi") * (int)me->query_skill("force") /12);
         message_vision(msg,target);
         target->receive_damage("kee",damage);
           } 
          COMBAT_D->report_status(target);
          return 1;
         }else {
                msg = "$n堪堪躲开这招，但也被吓出了一身冷汗。\n" NOR;
        }
        message_vision(msg, me, target);
        return 1;
}

