// jiuyang-shengong.c 九阳神功
// cleansword

inherit FORCE;

int valid_enable(string usage)
{
	return usage == "force";
}

int valid_learn(object me)
{

if (me->query("banghui")!="明教")
				    
return notify_fail("九阳神功博大精深,非明教弟子不传.\n");
	if ((int)me->query_skill("force", 1) < 30)
		return notify_fail("你的基本内功火候还不够，无法领会九阳神功。\n");


	return 1;
}

string exert_function_file(string func)
{
return "/daemon/class/mingjiao/jiuyang-shengong/" + func;
}

int power_point()	{	return 2;	}
int hard_point()	{	return 3;	}
