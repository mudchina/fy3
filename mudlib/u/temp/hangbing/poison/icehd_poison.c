//icehd_poison.c

#include <ansi.h>
#include <condition.h>

inherit F_CLEAN_UP;

int update_condition(object me, int duration)
{
   if( duration < 1 ) return 0;
   if( !living(me) ) {
      message("vision", me->name() + "的突然身体一颤,一道绿气在头上悬浮。\n", environment(me), me);
   }
   else {
      tell_object(me, HIB "突然你感到丹田突然收缩，一道寒气直升入胸，你中的寒冰剧毒发作了！\n" NOR );
      message("vision", me->name() + "的身子突然僵住，一股寒气从他身上发出。\n",
            environment(me), me);
   }
      me->receive_wound("qi",15 + random(20));
      me->receive_wound("jing", 20);
      me->apply_condition("icehb_poison", duration - 1);
      if ( (int)me->query_temp("powerup") ) 
         { me->add_temp("apply/attack", - (int)(me->query_skill("force")/3));
             me->add_temp("apply/dodge", - (int)(me->query_skill("force")/3));
             me->delete_temp("powerup");  }

   if( duration < 1 ) return 0;
   return CND_CONTINUE;
}

