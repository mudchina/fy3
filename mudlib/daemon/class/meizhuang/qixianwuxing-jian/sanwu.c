//tianyu-qijian
#include <ansi.h>
#include <combat.h>
inherit SSERVER;
//	inherit F_CLEAN_UP;
int perform(object me, object target)
{
        string msg, tparryskill;
        int mjianb, mjianh, tparryb, tparryh, mneili, tneili, mexp, texp, damage;
        object weapon,tweapon;
        weapon = me->query_temp("weapon");
        mjianb= (int)me->query_skill("sword",1);
        mjianh= (int)me->query_skill("qixianwuxing-jian",1);
        mneili = (int)me->query("force");
        mexp = (int)me->query("combat_exp");
        msg = "";
        if(!objectp(weapon)||(string)weapon->query("skill_type")!="sword")
        return notify_fail("不拿剑怎使七弦无行剑法？");
        if ( mjianh < 80) return notify_fail("你的七弦无形剑还不够火候！\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("『绝尘三无』只能在战斗中使用。\n");
        if ((int)me->query("force")<300)
                return notify_fail("你的内力不够。\n"); 
        tweapon = target->query_temp("weapon");  //  Here might be wrong, need to check.
        tparryb= (int)target->query_skill("parry",1);
        tneili = (int)target->query("force");
        texp = (int)target->query("combat_exp");
        tparryskill = target->query_skill_mapped("parry");
        tparryh=target->query_skill(tparryskill,1);
        me->add("force",-300);
        me->receive_damage("sen", 20);
     message_vision(HIC"$N招式一变，手中"+weapon->name()+"斜指向下，双眼漠然，一副与世无争的神态，却使出了梅庄的绝学--『绝尘三无』！\n\n" NOR,me,target);        


    message_vision(CYN"$N向前迈一步，平�-无华地刺出一剑，慢，却嘶嘶作响。\n"NOR,me);
     message_vision(CYN"这一招『无味』拼的是内力。\n\n"NOR,me);
     if (random(mexp)>(int)(texp/10) && random(mneili) > (int)(tneili/3)&&
          (int)me->query("max_force")+mneili > (int)target->query("max_force") + tneili) 
        {
             msg = HIC"$n只觉得一股劲气象化作千百枚细针一样，穿体而过！\n"
                                "“哇”的一声，$n喷出一大口鲜血，看来是受了内伤！\n\n"NOR;
damage= (int)(((int)me->query("max_force")/2+mneili -  (int)target->query("max_force")/2 - tneili)/3);
 if(damage<1)damage = 1;
 target->receive_damage("kee", me->query("eff_kee")*damage/80, me);
 target->receive_wound("kee", me->query("eff_sen")*damage/100, me);
     message_vision(msg, me, target);
     COMBAT_D->report_status(target);
     }
     else {
             msg = HIC"$n忙运功向抗，深厚的内力将$N的剑气都激散了。\n\n"NOR;
            message_vision(msg, me, target);
        }


       message_vision(CYN"$N由静转动，一动便急如风，脚踏奇门，剑走奇招，剑剑从$n意想不到的方位无声无息地刺出！\n" NOR,me,target);
        message_vision(CYN"这一招『无声』斗的是剑法！\n\n" NOR,me,target);
if(random(mexp)>(int)(texp/10)&& random((int)(mjianb + mjianh*3/2))>(int)((tparryb+tparryh)/2))
 {msg = HIC"$n马上手忙脚乱，不知该如何去招架这静若幽冥、快如风的剑法！\n"
        "果不然，$N的"+weapon->name()+"招招命中，$n浑身上下被刺的遍体鳞伤！\n\n"NOR;
       damage=random(100)+me->query("force_factor");
       if(damage<1)damage = 1;
       target->receive_damage("kee", me->query("eff_kee")*damage/80, me);
       target->receive_wound("kee", me->query("eff_sen")*damage/100, me);
       message_vision(msg, me, target);
       COMBAT_D->report_status(target);
     }
else{
         msg = HIC"$n却心静如水，丝毫不显慌乱，见招拆招，瓦解了$N这无声的攻势。\n\n"NOR;
            message_vision(msg, me, target);
        }


          message_vision(CYN"$N突然收住身形，回步而立，撤剑于背后，无招胜有招，无形胜有形。\n"NOR,me);
          message_vision(CYN"这一招『无形』比的是经验！\n\n"NOR,me);
if(random(mexp)>(int)(texp/2))
{msg = HIC"$n果然上当，以为$N露出破绽，大喜之下，急忙上前想抢攻。\n"
"$N微微一笑，待$n靠近，长袖一抖，袖尽剑出，直探$n的胸口。\n"
"$n连剑影还没看到，就差点儿被穿的透心凉！\n\n"NOR;
damage=(int)(random((int)(mjianh/2))+me->query("force_factor")*3/2);
if(damage<1)damage = 1;
target->receive_damage("kee", me->query("eff_kee")*damage/80, me);
target->receive_wound("kee", me->query("eff_sen")*damage/100, me);
     message_vision(msg, me, target);
     COMBAT_D->report_status(target);
     }
else{
         msg = HIC"$n看破了这招的虚实，将计就计，假装冲上前，却在$N出剑的一瞬间腾空�-开，回手竟反攻一招！\n\n"NOR;
            message_vision(msg, me, target);
        COMBAT_D->do_attack(target, me, tweapon);
        }
        
        me->start_busy(3);
        
     
        return 1;
}








