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
        return notify_fail("≤ªƒ√Ω£‘ı π∆ﬂœ“Œﬁ––Ω£∑®£ø");
        if ( mjianh < 80) return notify_fail("ƒ„µƒ∆ﬂœ“Œﬁ–ŒΩ£ªπ≤ªπªª∫Ú£°\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("°∫æ¯≥æ»˝Œﬁ°ª÷ªƒ‹‘⁄’Ω∂∑÷– π”√°£\n");
        if ((int)me->query("force")<300)
                return notify_fail("ƒ„µƒƒ⁄¡¶≤ªπª°£\n"); 
        tweapon = target->query_temp("weapon");  //  Here might be wrong, need to check.
        tparryb= (int)target->query_skill("parry",1);
        tneili = (int)target->query("force");
        texp = (int)target->query("combat_exp");
        tparryskill = target->query_skill_mapped("parry");
        tparryh=target->query_skill(tparryskill,1);
        me->add("force",-300);
        me->receive_damage("sen", 20);
     message_vision(HIC"$N’– Ω“ª±‰£¨ ÷÷–"+weapon->name()+"–±÷∏œÚœ¬£¨À´—€ƒÆ»ª£¨“ª∏±”Î ¿Œﬁ’˘µƒ…ÒÃ¨£¨»¥ π≥ˆ¡À√∑◊Øµƒæ¯—ß--°∫æ¯≥æ»˝Œﬁ°ª£°\n\n" NOR,me,target);        


    message_vision(CYN"$NœÚ«∞¬ı“ª≤Ω£¨∆Ωµ-Œﬁª™µÿ¥Ã≥ˆ“ªΩ££¨¬˝£¨»¥ÀªÀª◊˜œÏ°£\n"NOR,me);
     message_vision(CYN"’‚“ª’–°∫ŒﬁŒ∂°ª∆¥µƒ «ƒ⁄¡¶°£\n\n"NOR,me);
     if (random(mexp)>(int)(texp/10) && random(mneili) > (int)(tneili/3)&&
          (int)me->query("max_force")+mneili > (int)target->query("max_force") + tneili) 
        {
             msg = HIC"$n÷ªæıµ√“ªπ…æ¢∆¯œÛªØ◊˜«ß∞Ÿ√∂œ∏’Î“ª—˘£¨¥©ÃÂ∂¯π˝£°\n"
                                "°∞Õ€°±µƒ“ª…˘£¨$n≈Á≥ˆ“ª¥Ûø⁄œ —™£¨ø¥¿¥ « ‹¡Àƒ⁄…À£°\n\n"NOR;
damage= (int)(((int)me->query("max_force")/2+mneili -  (int)target->query("max_force")/2 - tneili)/3);
 if(damage<1)damage = 1;
 target->receive_damage("kee", me->query("eff_kee")*damage/80, me);
 target->receive_wound("kee", me->query("eff_sen")*damage/100, me);
     message_vision(msg, me, target);
     COMBAT_D->report_status(target);
     }
     else {
             msg = HIC"$n√¶‘Àπ¶œÚøπ£¨…Ó∫Òµƒƒ⁄¡¶Ω´$NµƒΩ£∆¯∂ºº§…¢¡À°£\n\n"NOR;
            message_vision(msg, me, target);
        }


       message_vision(CYN"$N”…æ≤◊™∂Ø£¨“ª∂Ø±„º±»Á∑Á£¨Ω≈Ã§∆Ê√≈£¨Ω£◊ﬂ∆Ê’–£¨Ω£Ω£¥”$n“‚œÎ≤ªµΩµƒ∑ΩŒªŒﬁ…˘Œﬁœ¢µÿ¥Ã≥ˆ£°\n" NOR,me,target);
        message_vision(CYN"’‚“ª’–°∫Œﬁ…˘°ª∂∑µƒ «Ω£∑®£°\n\n" NOR,me,target);
if(random(mexp)>(int)(texp/10)&& random((int)(mjianb + mjianh*3/2))>(int)((tparryb+tparryh)/2))
 {msg = HIC"$n¬Ì…œ ÷√¶Ω≈¬“£¨≤ª÷™∏√»Á∫Œ»•’–º‹’‚æ≤»Ù”ƒ⁄§°¢øÏ»Á∑ÁµƒΩ£∑®£°\n"
        "π˚≤ª»ª£¨$Nµƒ"+weapon->name()+"’–’–√¸÷–£¨$nªÎ…Ì…œœ¬±ª¥Ãµƒ±ÈÃÂ¡€…À£°\n\n"NOR;
       damage=random(100)+me->query("force_factor");
       if(damage<1)damage = 1;
       target->receive_damage("kee", me->query("eff_kee")*damage/80, me);
       target->receive_wound("kee", me->query("eff_sen")*damage/100, me);
       message_vision(msg, me, target);
       COMBAT_D->report_status(target);
     }
else{
         msg = HIC"$n»¥–ƒæ≤»ÁÀÆ£¨Àø∫¡≤ªœ‘ª≈¬“£¨º˚’–≤’–£¨ÕﬂΩ‚¡À$N’‚Œﬁ…˘µƒπ• ∆°£\n\n"NOR;
            message_vision(msg, me, target);
        }


          message_vision(CYN"$NÕª»ª ’◊°…Ì–Œ£¨ªÿ≤Ω∂¯¡¢£¨≥∑Ω£”⁄±≥∫Û£¨Œﬁ’– §”–’–£¨Œﬁ–Œ §”––Œ°£\n"NOR,me);
          message_vision(CYN"’‚“ª’–°∫Œﬁ–Œ°ª±»µƒ «æ≠—È£°\n\n"NOR,me);
if(random(mexp)>(int)(texp/2))
{msg = HIC"$nπ˚»ª…œµ±£¨“‘Œ™$N¬∂≥ˆ∆∆’¿£¨¥Ûœ≤÷Æœ¬£¨º±√¶…œ«∞œÎ«¿π•°£\n"
"$NŒ¢Œ¢“ª–¶£¨¥˝$nøøΩ¸£¨≥§–‰“ª∂∂£¨–‰æ°Ω£≥ˆ£¨÷±ÃΩ$nµƒ–ÿø⁄°£\n"
"$n¡¨Ω£”∞ªπ√ªø¥µΩ£¨æÕ≤Óµ„∂˘±ª¥©µƒÕ∏–ƒ¡π£°\n\n"NOR;
damage=(int)(random((int)(mjianh/2))+me->query("force_factor")*3/2);
if(damage<1)damage = 1;
target->receive_damage("kee", me->query("eff_kee")*damage/80, me);
target->receive_wound("kee", me->query("eff_sen")*damage/100, me);
     message_vision(msg, me, target);
     COMBAT_D->report_status(target);
     }
else{
         msg = HIC"$nø¥∆∆¡À’‚’–µƒ–È µ£¨Ω´º∆æÕº∆£¨ºŸ◊∞≥Â…œ«∞£¨»¥‘⁄$N≥ˆΩ£µƒ“ªÀ≤º‰Ã⁄ø’∑-ø™£¨ªÿ ÷æπ∑¥π•“ª’–£°\n\n"NOR;
            message_vision(msg, me, target);
        COMBAT_D->do_attack(target, me, tweapon);
        }
        
        me->start_busy(3);
        
     
        return 1;
}








