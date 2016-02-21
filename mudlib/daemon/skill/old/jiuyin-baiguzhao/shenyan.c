//jiuyin-baiguzhao perform 七窍生烟

#include <ansi.h>
#include <skill.h>
#include <weapon.h>
#include <combat.h>

inherit SSERVER;

void remove_effect(object me, int aamount, int damount);

int perform(object me, object target)
{
        object weapon;  
        string msg;
        int d_count, count, kee, maxkee, skill;

        if( (int)me->query_temp("shengyan") ) 
                return notify_fail(HIG"你已经在运功中了。\n");

        if( !me->is_fighting() )
        return notify_fail("「七窍生烟」只能在战斗中使用。\n");

    if( (int)me->query("max_force") < 700 )
                return notify_fail("你的内力修为还不够高！\n");

        if( (int)me->query_skill("jiuyin-shengong", 1) < 60)
                return notify_fail("你的九阴神功的修为不够，不能使用「七窍生烟」! \n");

//      if( (int)me->query_skill("jiuyin-baiguzhao") < 60 )
//              return notify_fail("你的九阴白骨爪还不到家，无法使用「七窍生烟」！\n");

        if( me->query_skill_mapped("unarmed") != "jiuyin-baiguzhao") 
                return notify_fail("你没有激发九阴白骨爪，无法使用「七窍生烟」！\n");
        
        
    msg = RED "$N使出九阴真经的绝技「七窍生烟」，臂力陡然增加！\n" NOR;
        
        kee = me->query("kee");
        maxkee = me->query("max_kee");
        skill = (int) (me->query_skill("jiuyin-baiguzhao",1) / 3);
        count = me->query_str();
        d_count = (int)me->query_int() / 2;

        if(kee > (maxkee * 0.4))
        {   
        message_vision(msg, me, target);
                
                me->add_temp("str", count * 2); 
                me->add_temp("int", 0-d_count);
                me->set_temp("shengyan", 1);
                me->start_call_out( (: call_other, __FILE__, "remove_effect", me, count*2, d_count :), skill);

                me->add("force", -150);
        return 1;
        }
        else{
                msg = HIR "$N拼尽毕生功力使出了九阴真经的终极绝技, 全身骨骼一阵爆响, 欲与敌人拼个鱼死网破!\n" NOR;
                message_vision(msg, me, target);
                me->add_temp("str", count * 9);
                me->set_temp("shengyan", 1);

                me->start_call_out( (: call_other, __FILE__, "remove_effect", me, count*9, 0 :), 2);
                COMBAT_D->do_attack(me, target, me->query_temp("weapon"), 0);
                me->set("force",0);
                me->add("max_force",-10);

 //             msg = HIR "$N用尽了最后一点气力, 喷出一口鲜血, 一头栽倒在地!\n" NOR;
                message_vision(msg, me, target);

                me->set("gin",0);
                me->set("kee",0);

//              me->unconcious();


                return 1;
        }
}

void remove_effect(object me, int aamount, int damount)
{
        
 
 if ( (int)me->query_temp("shengyan") )
                me->add_temp("str", -aamount);
        {
                me->add_temp("int", damount);
                me->delete_temp("shengyan");
                tell_object(me, HIY "你的「七窍生烟」运行完毕，将内力收回丹田。\n" NOR);
                me->start_busy(random(4));


        }
}
