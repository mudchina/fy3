// yunlong-xinfa.c 云龙心法

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
        if ((int)me->query_skill("force", 1) < 10)
                return notify_fail("你的基本内功火候还不够。\n");

        return 1;
}

string exert_function_file(string func)
{
return "/daemon/class/yunlong/yunlong-xinfa/"+func;
}

int practice_skill(object me)
{	
	return notify_fail("云龙心法只能靠学(learn)来提高。\n");
}
