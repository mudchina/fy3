// beimin-shengong.c 北冥神功
// By Hop

inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{
	return 1;
}

int practice_skill(object me)
{
    return notify_fail("北冥神功只能用学的，或是从运用(exert)中增加熟练度。\n");
}

string exert_function_file(string func)
{
    return __DIR__"beiming-shengong/" + func;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 3;	}
