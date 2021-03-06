//玄天拳法
#include <ansi.h>
inherit SKILL;

mapping *action = ({
	([  "action":       "$N使一招「天马行空」，对准$n的$l「呼」地一拳",
		"dodge":		-40,
		"parry":		40,
		"damage_type":	"瘀伤"
	]),
	 ([  "action":       "$N扬起$w，一招「天外有天」便往$n的$l招呼过去",
		"dodge":		-30,
		"parry":		30,
		"weapon":	"拳头",
		"damage":	50,
		"force":	50,
		"damage_type":	"瘀伤"
	]),
	([  "action":       "$N左手虚晃，$w「海阔天空」往$n的$l击出",
		"dodge":		-30,
		"parry":		30,
		"weapon":	"右拳",
		"damage":	30,
		"force":	20,
		"damage_type":	"瘀伤"
	]),
	([  "action":       "$N步履一沉，左拳拉开，使出「天涯海角」$w击向$n$l",
		"dodge":		-30,
		"parry":		30,
		"weapon":	"右拳",
		"damage":	60,
		"damage":	30,
		"damage_type":	"瘀伤"
	]),
});

int valid_learn(object me)
{
	if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
		return notify_fail("练玄天拳法必须空手。\n");
	return 1;
}

int valid_enable(string usage)
{
	return usage=="unarmed"||usage=="parry";
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if( (int)me->query("kee") < 30 )
		return notify_fail("你的体力不够了，休息一下再练吧。\n");
	me->receive_damage("kee", 30);
	return 1;
}
string perform_action_file(string action)
{
	 return CLASS_D("xiake")+"/xuantian-quan/"+action;
}
void skill_improved(object me)
{
	if(me->query_skill("xuantian-quan",1)==20)
	tell_object(me,HIC"你领悟了「玄天指」的指法！(xuantianzhi)\n"NOR);
}
