// yunlong-jian.c 云龙剑

inherit SKILL;

mapping *action = ({
([	"action":"\n$N使一式「悠悠顺自然」，手中$w嗡嗡微振，幻成一条白光刺向$n的$l",
	"damage":50,
	"damage_type":	"刺伤"
]),
([	"action":"\n$N错步上前，使出「来去若梦行」，剑意若有若无，$w淡淡地向$n的$l挥去",
	"damage":60,
	"damage_type":	"割伤"
]),
([	"action":"\n$N一式「志当存高远」，纵身飘开数尺，运发剑气，手中$w遥摇指向$n的$l",
	"damage":70,
	"damage_type":	"刺伤"
]),
([	"action":"$N纵身轻轻跃起，一式「表里俱澄澈」，剑光如水，一泻千里，洒向$n全身",
	"damage":80,
	"damage_type":	"割伤"
]),
([	"action":"$N手中$w中宫直进，一式「随风潜入夜」，无声无息地对准$n的$l刺出一剑",
	"damage":90,
	"damage_type":	"刺伤"
]),
([	"action":"$N手中$w一沉，一式「润物细无声」，无声无息地滑向$n的$l",
	"damage":100,
	"damage_type":	"割伤"
]),
([	"action":"\n$N手中$w斜指苍天，剑芒吞吐，一式「云龙听梵音」，对准$n的$l斜斜击出",
	"damage":110,
	"damage_type":	"刺伤"
]),
([	"action":"$N左指凌空虚点，右手$w逼出丈许雪亮剑芒，一式「万里一点红」刺向$n的咽喉",
	"damage":120,
	"damage_type":	"刺伤"
]),
([	"action":"$N合掌跌坐，一式「我心化云龙」，$w自怀中跃出，如疾电般射向$n的胸口",
	"damage":130,
	"damage_type":	"刺伤"
]),
([	"action":"\n$N呼的一声拔地而起，一式「日月与同辉」，$w幻出万道光影，将$n团团围住",
	"damage":150,
	"damage_type":	"内伤"
]),
([	"action":"$N随风轻轻飘落，一式「清风知我意」，手中$w平指，缓缓拍向$n脸颊",
	"damage":170,
	"damage_type":	"内伤"
]),
([	"action" : "$N剑尖微颤作龙吟，一招「高处不胜寒」，切骨剑气如飓风般裹向$n全身",
	"damage":190,
	"damage_type":	"内伤"
]),
([	"action" : "$N募的使一招「红叶舞秋山」，顿时剑光中几朵血花洒向$n全身",
	"damage":210,
	"damage_type":	"内伤"
]),
});

int valid_enable(string usage) { return usage == "sword" || usage == "parry"; }

int valid_learn(object me)
{
	if ((int)me->query("max_force") < 100)
		return notify_fail("你的内力不够。\n");
	if ((int)me->query_skill("yunlong-xinfa", 1) < 20)
		return notify_fail("你的云龙心法火候太浅。\n");
	if ((int)me->query_skill("force", 1) < 40)
		return notify_fail("你的基本内功火候太浅。\n");
	return 1;
}

mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	object weapon;

	if (!objectp(weapon = me->query_temp("weapon"))
	|| (string)weapon->query("skill_type") != "sword")
		return notify_fail("你使用的武器不对。\n");
	if ((int)me->query("kee") < 50)
		return notify_fail("你的体力不够练云龙剑法。\n");
	me->receive_damage("kee", 25);
	return 1;
}
string perform_action_file(string action)
{
        return __DIR__"yunlong-jianfa/" + action;

}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 3;	}

