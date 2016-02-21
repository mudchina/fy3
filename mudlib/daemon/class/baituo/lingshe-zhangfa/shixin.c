#include <ansi.h>
#include <combat.h>
inherit SSERVER;
static object *enemy = ({});
int perform(object me, object target)
{
        string msg;                                
        int extra;
        int rir;
        mapping map;
        object weapon;
        if(me->is_busy())
                return notify_fail("你现在没空！！\n");
        extra = me->query_skill("lingshe-zhangfa",1);
        if ( extra < 80) return notify_fail("你的灵蛇杖法还不够纯熟！\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("万蛇噬心 只能对战斗中的对手使用。\n");
        if (me->query("force")<=200) return notify_fail("你的内力不足，无法使用 万蛇嗜心!\n");
        map = me->query_skill_map();
        if( undefinedp(map["staff"]) ) 
                return notify_fail("你没有 enable 杖法!\n");
        if( map["staff"] != "lingshe-zhangfa" )
                return notify_fail("你并没有使用灵蛇杖法!\n"); 
        weapon = me->query_temp("weapon");      
        if( !objectp(weapon) || weapon->query("skill_type")!= "staff" )
                return notify_fail("你并没有使用杖法!\n");
        rir = target->query_skill("parry",1);
        me->add("force",-180);
        me->add("sen",-30);
        message_vision(HIC"$N手中招数一变，使出灵蛇杖法中的万蛇噬心!\n\n" NOR,me);
        me->start_busy(2);
        if (random(me->query("combat_exp")*(extra/40+1))>random(target->query("combat_exp"))*(rir/40+1))
        {
          weapon = me->query_temp("weapon");
          if(extra > 140){
          message_vision(HIB "$N脸色变的诡异扭曲，手中杖头泛出点点幽绿的光芒，有如无数条毒蛇向$n扑来！\n\n" NOR,me,target); 
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          target->receive_damage("kee",0,me);
          target->start_busy(2);
        }
        else
          if(extra > 80){
          message_vision(HIG "$N脸色变的诡异扭曲，手中杖头泛出点点幽绿的光芒，有如无数条毒蛇向$n扑来！\n\n" NOR,me,target);
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          target->receive_damage("kee",0,me);
          target->start_busy(2);
        }
           }
        else
        {
       message_vision("但$n看破$N的意图，趁势发动攻击！\n",me,target);
        }
        return 1;
}

