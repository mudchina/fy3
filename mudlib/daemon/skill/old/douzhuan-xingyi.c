// 乾坤大挪移
#include <ansi.h>
inherit SKILL;


int valid_enable(string usage) { return usage=="parry"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
        return 
notify_fail("先天气功只能用学的，或是从运用(exert)中增加熟练度。\n");
}
int parry_action(object me,object target,object target_weapon,int attack_type,mapping action,string limb)
{
	string msg;
	object weapon;
	int dp,ap;
	if(target_weapon)	ap=target->query_skill(target_weapon->query("skill_type"));
	else	ap=target->query_skill("unarmed");
	dp=me->query_skill("douzhuan-xingyi",1);
	weapon=me->query_temp("weapon");
	if(target_weapon)	{
		if(! weapon)	return 0;
	}
	if(random(dp)<ap/2)	return 0;
	msg="\n"+action["action"]+"\n";
	msg+=HIW"$n身形一晃，使出「斗转星移」神功，以彼之道还制彼身！"NOR;
	if(target_weapon)
	msg=replace_string(msg,"$w",target_weapon->query("name"));
	msg=replace_string(msg,"$l",limb);
	message_combat(msg,target,me);
	COMBAT_D->do_attack_now(me,target,weapon,2,action,limb);
	return 1;
}

