// nianhua-zhi.c -拈花指

inherit SKILL;

mapping *action = ({
([	"action" : "$N侧身抬臂，右指划了个半圈，一式「瓶花落砚」击向$n的$l",
	"damage":100,
	"weapon":"食指",
	"damage_type" : "刺伤"
]),
([	"action" : "$N左掌虚托，一式「寒梅吐蕊」，右指穿腋疾出，指向$n的胸前",
	"damage":140,
	"weapon":"右手手指",
        "damage_type" : "刺伤"
]),
([	"action" : "$N俯身斜倚，左手半推，右手一式「初杏问酒」，向$n的$l划过",
	"damage":180,
	"weapon":"左手中指",
        "damage_type" : "刺伤"
]),
([	"action" : "$N双目微睁，一式「露草斜阳」，双手幻化出千百个指影，拂向$n的$l",
	"damage":220,
	"weapon":"手指",
        "damage_type" : "刺伤"
]),
([	"action" : "$N一式「仰月承霖」，左掌护住丹田，右手斜指苍天，蓄势点向$n的$l",
	"damage":240,
	"weapon":"内力",
        "damage_type" : "刺伤"
]),
([	"action" : "$N双掌平托胸前，十指叉开，一式「叶底留莲」，指向$n的周身大穴",
	"damage":280,
	"weapon":"指尖剑气",
        "damage_type" : "刺伤"
]),
([	"action" : "$N双掌翻飞，一式「清风拂桂」，指端迸出无数道劲气，射向$n的全身",
	"damage":320,
	"weapon":"食指",
        "damage_type" : "刺伤"
]),
([	"action" : "$N一式「菊圃秋霜」，并指如刃，一束束锐利无俦的刀气，凌虚向$n的$l砍去",
	"damage":360,
	"weapon":"内力",
        "damage_type" : "刺伤"
]),
([	"action" : "$N一式「伽叶微笑」，双手食指交叉，指端射出一缕罡气，穿过$n的$l",
	"damage":400,
	"weapon":"右手双指",
        "damage_type" : "刺伤"
]),
([	"action" : "$N左掌竖立胸前，一式「佛祖拈花」，右手食指扣住拇指，轻轻对着$n一弹",
	"damage":440,
	"weapon":"真气",
        "damage_type" : "刺伤"
])
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry"; }


int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("练拈花指必须空手。\n");
	if ((int)me->query_skill("hunyuan-yiqi", 1) < 20)
		return notify_fail("你的混元一气功火候不够，无法学拈花指。\n");
	if ((int)me->query("max_force") < 100)
		return notify_fail("你的内力太弱，无法练拈花指。\n");
	return 1;
}


mapping query_action(object me, object weapon)
{
                        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if ((int)me->query("kee") < 30)
		return notify_fail("你的体力太低了。\n");
	if ((int)me->query("force") < 20)
		return notify_fail("你的内力不够练拈花指。\n");
	me->receive_damage("kee", 10);
	me->add("force", -5);
	return 1;
}
string perform_action_file(string action)
{
	return __DIR__"nianhua-zhi/" + action;
}

