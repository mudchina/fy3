// sword.c
#include <ansi.h>

inherit SKILL;

string type() { return "knowledge"; }
void skill_improved(object me)
{
	if((int)me->query_skill("foxuexinde",1)==40)
	tell_object(me,HIC"ÄãÁìÎòÁË¡¸ÌìÑÛÍ¨¡¹£¡(help tyt)\n"NOR);
	if((int)me->query_skill("foxuexinde",1)==60)
	tell_object(me,HIC"ÄãÁìÎòÁË¡¸õ®º÷¹à¶¥¡¹£¡(help thgd)\n"NOR);
	if((int)me->query_skill("foxuexinde",1)==100)
	tell_object(me,HIC"ÄãÁìÎòÁË¡¸·ð·¨ÎÞ±ß¡¹£¡(help ffwb)\n"NOR);
}
