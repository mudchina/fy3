// bahuang-gong.c 八荒六合唯我独尊功
#include <ansi.h>

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
// need more limit here
{
	if ((int)me->query_skill("force", 1) < 10)
		return notify_fail("你的基本内功火候还不够。\n");

        return 1;
}

int practice_skill(object me)
{
	return notify_fail("八荒六合唯我独尊功只能用学(learn)的来增加熟练度。\n");
}

string exert_function_file(string func)
{
return "/daemon/class/lingjiu/duzun-gong/"+func;
}
int message(object me)
{
message_vision(HIC+"$N凝神息气，只见一股轻烟缭绕周身.\n"NOR,me);
return 1;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 3;	}

