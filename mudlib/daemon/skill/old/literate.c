// literate.c

#include <ansi.h>

inherit SKILL;

string type() { return "knowledge"; }

void skill_improved(object me)
{
	int s;

	s = me->query_skill("literate", 1);
//        if( s%10==9 && (int)me->query("spi") < s/4) {
//             tell_object(me, HIW "由於你的勤学苦读，你的灵性提高了。\n" NOR)
//                me->add("spi", 2);
//        }

//	if( s%10==9 && (int)me->query("int") > 30) {
//	        tell_object(me, HIW "由於你的勤学苦读，你的悟性提高了。\n" NOR)
//	        me->add("int", -1);
//	}
	        
        if( s%10==9 && (int)me->query("int") < 30) {
        
       	if( s%10==9 && (int)me->query("int") < s/4) {
		tell_object(me, HIW "由於你的勤学苦读，你的悟性提高了。\n" NOR);
		me->add("int", 1);
	}
	}
}
