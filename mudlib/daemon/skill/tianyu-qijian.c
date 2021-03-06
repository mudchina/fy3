// tianyu-qijian.c 天羽奇剑

inherit SKILL;

mapping *action = ({
([	"action":"$N使一式「海天一线」，手中$w嗡嗡微振，幻成一条疾光刺向$n的$l",
	"damage":60,
	"damage_type":	"割伤"
]),
([	"action":"$N错步上前，使出「闪电惊虹」，手中$w划出一道剑光劈向$n的$l",
	"damage":80,
	"damage_type":	"割伤"
]),
([	"action":"$N手中$w一抖，一招「日在九天」，斜斜一剑反腕撩出，攻向$n的$l",
	"damage":100,
	"damage_type":	"割伤"
]),
([	"action":"$N手中剑锵啷啷长吟一声，一式「咫尺天涯」，一道剑光飞向$n的$l",
	"damage":120,
	"damage_type":	"刺伤"
]),
([	"action":"$N一式「怒剑狂花」，手中$w舞出无数剑花，使$n难断虚实，无可躲避",
	"damage":140,
	"damage_type":	"刺伤"
]),
([	"action":"$N手中$w斜指苍天，剑芒吞吐，一式「九弧震日」，对准$n的$l斜斜击出",
	"damage":160,
	"damage_type":	"刺伤"
]),
([	"action":"$N一式「漫天风雪」，手腕急抖，挥洒出万点金光，刺向$n的$l",
	"damage":180,
	"damage_type":	"刺伤"
]),
([	"action":"$N一式「天河倒泻」，$w飞斩盘旋，如疾电般射向$n的胸口",
	"damage":200,
	"damage_type":	"刺伤"
]),
([	"action":"$N一式「天外飞仙」，$w突然从天而降，一片金光围掠$n全身",
	"damage":250,
	"damage_type":	"刺伤"
])
});

int valid_enable(string usage) { return usage == "sword" || usage == "parry"; }
int valid_learn(object me) { return 1; }


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
	if((int)me->query("kee")<50)
		return notify_fail("你的体力不够练天羽奇剑。\n");
	me->receive_damage("kee",25);
	return 1;
}

int power_point()       {       return 1.75;     }
int hard_point()        {       return 2;       }

string perform_action_file(string action)
{
return "/daemon/class/lingjiu/tianyu-qijian/" + action;
}

