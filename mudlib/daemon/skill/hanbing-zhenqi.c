// taiji-shengong.c 太极神功
// By Xiang
// Modified by Hop

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
	if ((int)me->query_skill("force", 1) < 10)
		return notify_fail("你的基本内功火候还不够。\n");

	return 1;
}

int practice_skill(object me)
{
	return notify_fail("寒冰真气只能通过战斗(exert)来增加熟练度。\n");
}

string exert_function_file(string func)
{
return "/daemon/class/songshan/hanbing-zhenqi/"+func;
}
int power_point()	{	return 1.5;	}
int hard_point()	{	return 2;	}
