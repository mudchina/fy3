inherit FORCE;

int valid_enable(string usage)
{
        return usage == "force";
}

int valid_learn(object me)
{
	int nf;
        nf = (int)me->query_skill("force", 1);

        if ( nf < 15)
	return notify_fail("你的基本内功火候还不够，无法领会三阳神功。\n");
          return 1;
}


int practice_skill(object me)
{
	return notify_fail("三阳神功只能在实战中增加熟练度。\n");
}

string exert_function_file(string func)
{
return "/daemon/class/mingjiao/sanyang-shengong/"+func;
}

int power_point()       {       return 1.25;	}
int hard_point()	{	return 1.5;	}
