// TIE@FY3
inherit SKILL;
mapping *action = ({
        ([      "action":               
"$N使一招「空王不语」，手中$w舞动如飞，扫向$n下盘！",
		"damage":100,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "挫伤"
        ]),
        ([      "action":               
"$N挥起$w，一招「满目苍生」，手中$w只攻不守，攻向$n$l！",
		"damage":200,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "挫伤"
        ]),
        ([      "action":               
"$N横过手中$w，使出「杖掠横空」，手中$w劈空而下，击向$n$l！",
		"damage":300,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "挫伤"
        ]),
        ([      "action":               
"$N使出一招「苦海慈航」，$w大开大合，撞向$n$l！",
		"damage":400,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "挫伤"
        ]),
        ([      "action":
"$N挥起$w，一招「满目苍生」，手中$w只攻不守，攻向$n$l！",
		"damage":500,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "挫伤"
        ]),
        ([      "action":
"$N横过手中$w，使出「杖掠横空」，手中$w劈空而下，击向$n$l！",
		"damage":600,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "挫伤"
        ]),
});

int valid_learn(object me)
{
	if((int)me->query_str()<35)
                return 
notify_fail("你的膂力还不够，也许该练一练内力来增强力量。\n");

        return 1;
}

int valid_enable(string usage)
{
        return (usage=="staff") || (usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        object weapon;

        if( !objectp(weapon = me->query_temp("weapon"))
        ||      (string)weapon->query("skill_type") != "staff" )
                return 
notify_fail("你必须先找一根木杖或者是类似的武器，才能练杖法。\n");

        if( (int)me->query("kee") < 60 )
                return 
notify_fail("你的体力不够练这门杖法，还是先休息休息吧。\n");
	me->receive_damage("kee",50);
        return 1;
}
 
string perform_action_file(string action)
{
	return __DIR__"fumo-zhangfa/"+action;
}

