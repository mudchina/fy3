#include <ansi.h>

int exert(object me)
{       
        int improve;

        if( me->is_fighting() )
                return notify_fail("战斗中运功疗伤？找死吗？\n");

        if (me->is_busy() )
        return notify_fail("你正忙着哪！\n");

        if ((int)me->query_skill("emei-xinfa", 1) < 100)
                return notify_fail("你的峨眉心法修为还不够。\n");

        if( (int)me->query("force") < 150 )
                return notify_fail("你的真气不够。\n");
        
      if( me->query_temp("yun_fengyun")   )
        return notify_fail("你正在运用峨眉心法的「风云」字决！\n");
write(MAG"你暗运风云两庄，心思浮云飘空之悠闲缓慢，默想狂风荡地之迅速紧急一股丹田热气分注四肢百骸，但觉身手敏捷了许多。\n"NOR, me);
        message_vision(MAG"只见$N微闭双眼，身旁凝起一圈白雾，瞬息间一股旋风卷过，身形又复清晰。\n"NOR, me);
        improve = (int)me->query_skill("dodge") * 2;
        me->add_temp("apply/dexerity", improve);
        me->set_temp("yun_fengyun", 1);  
        me->add("force", - 100);    
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, improve :), improve * 3/2 );
        return 1;
}
void remove_effect(object me, int improve)
{
        
      me->add_temp("apply/dexerity", - improve);        
      me->delete_temp("yun_fengyun");
      tell_object(me, HIR"你风云行功已久，略觉步履沉重了一些。\n"NOR);
}
