//吸星大法

inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)	
{
	return notify_fail("「吸星大法」只能通过专研铁板来提高！\n");
}

int practice_skill(object me)
{
        return 
notify_fail("「吸星大法」只能通过专研铁板，或是从运用(exert)中增加熟练度。\n");
}

//	 string perform_action_file(string action)
//	{
//	 return CLASS_D("xiake")+"/murongxinfa/"+action;
//	}
string exert_function_file(string func)
{
	return CLASS_D("xiake")+"/xixing-dafa/"+func;
}
