// hamagong.c 蛤蟆功
#include <ansi.h>
// By Five

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
	int i = (int)me->query_skill("hamagong", 1);
	int t = 1, j;

	if( i <= 100)
		for (j = 1; j < i / 10; j++)
			t*= 2;

	if ( me->query("gender") == "无性" && i > 49)
		return notify_fail("你无根无性，阴阳不调，难以领会高深的蛤蟆功。\n");

	if ((int)me->query_skill("force", 1) < 10)
		return notify_fail("你的基本内功火候不足，不能学蛤蟆功。\n");

	if(i<=100)
	{
if (i > 10 && (int)me->query("mingwang") > -t * 100)
			return notify_fail("学蛤蟆功，要心狠手辣，奸恶歹毒，你可做得不够呀！\n");
	}
	else
	{
if ((int)me->query("mingwang") >- (51200 + (i - 100) * 1000)) 
			return notify_fail("学蛤蟆功，要心狠手辣，奸恶歹毒，你可做得不够呀！\n");
	}

	return 1;
}

int practice_skill(object me)
{
	return notify_fail("蛤蟆功只能用学(learn)的来增加熟练度。\n");
}

string exert_function_file(string func)
{
return "/daemon/class/baituo/hamagong/" + func;
}
int message(object me)
{
message_vision(HIB+"$N脸上泛过一层碧绿色,身上衣衫如鼓风般扬起。\n"NOR,me);
return 1;
}
int power_point()	{	return 1.75;	}
int hard_point()	{	return 2;	}

string perform_action_file(string action)
{
return "/daemon/class/baituo/hamagong/" + action;
}
