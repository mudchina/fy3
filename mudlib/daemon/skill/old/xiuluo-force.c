// xiuluo-force.c 修罗阴煞功 by ksusan 7/12/97

inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
        return 
notify_fail("修罗阴煞功只能用学的，或是从运用(exert)中增加熟练度。\n");
}

//	 string perform_action_file(string action)
//	{
//	 return CLASS_D("xiake")+"/suiyu-force/"+action;
//	}
string exert_function_file(string func)
{
	return CLASS_D("xiake")+"/suiyu-force/"+func;
}
