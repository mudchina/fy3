// zixia-shengong.c 紫霞神功
// By Hop
#include <ansi.h>

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
	if ((int)me->query_skill("force", 1) < 10)
		return notify_fail("你的基本内功火候还不够，还不能学习紫霞神功。\n");

	return 1;
}

int practice_skill(object me)
{
	return notify_fail("紫霞神功只能用学(learn)的来增加熟练度。\n");
}

string exert_function_file(string func)
{
        return __DIR__"zixia-shengong/" + func;
}
int message(object me)
{
message_vision(MAG+"$N神凝丹田，息游紫府，脸上紫气一现即隐.\n"NOR,me);
return 1;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 2;	}
