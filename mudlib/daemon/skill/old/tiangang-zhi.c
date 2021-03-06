inherit SKILL;

mapping *action = ({
([	"action" : "$N拇指轻扣中指，一招「天地无情」，指尖弹向$n的$l",
	"force" : 10,
	"dodge" : 5,
	"lvl" : 0,
	"skill_name" : "天地无情",
	"damage_type" : "瘀伤"
]),
([	"action" : "$N右手衣袖轻拂,左手扣指轻弹，一式「袖里乾坤」，指风从衣袖中击向$n的$l",
	"force" : 20,
	"dodge" : 10,
	"lvl" : 10,
	"skill_name" : "袖里乾坤",
	"damage_type" : "瘀伤"
]),
([	"action" : "$N双手相交,十指轮转弹出，$n顿时手足慌乱,正是一招「法轮常转」",
	"force" : 40,
	"dodge" : 15,
	"lvl" : 20,
	"skill_name" : "法轮常转",
	"damage_type" : "瘀伤"
]),
([	"action" : "$N脸露微笑,右手五指如拨琴弦,一招「手挥五弦」,五道罡气直指向$n的$l",
	"force" : 60,
	"dodge" : 20,
	"lvl" : 30,
	"skill_name" : "手挥五弦",
	"damage_type" : "瘀伤"
]),
([	"action" : "$N使一招「借花献佛」，手指弹在$n的$l上,顿时,$l反弹而回",
	"force" : 80,
	"dodge" : 25,
	"lvl" : 40,
	"skill_name" : "借花献佛",
	"damage_type" : "瘀伤"
]),
([	"action" : "$N使出「绝天灭地」，伸指缓缓在身前划了个圈,将$n的攻势化于无形",
	"force" : 100,
	"dodge" : 0,
	"lvl" : 50,
	"skill_name" : "绝天灭地",
	"damage_type" : "瘀伤"
]),
([	"action" : "$N施出「天地无情」，指向$n头部,中途一抖,三道罡气分指向$n头，胸，腹三处要害",
	"force" : 120,
	"dodge" : 35,
	"lvl" : 60,
	"skill_name" : "天地无情",
	"damage_type" : "瘀伤"
]),
([	"action" : "$N盘坐如莲冉冉升起，一式「万法皆灭」，一团白色的光茫从指尖暴出,指向$n的$l",
	"force" : 140,
	"dodge" : 40,
	"lvl" : 80,
	"skill_name" : "万法皆灭",
	"damage_type" : "瘀伤"
])
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry"; }

int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("学「天罡指」必须空手。\n");
	if ((int)me->query_skill("yuxuan-guizheng", 1) < 10)
		return notify_fail("你的「玉玄归真」火候不够，无法学「天罡指」。\n");
	if ((int)me->query_skill("unarmed",1) < 10)
		return notify_fail("你的徒手搏击太低，无法学「天罡指」。\n");
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
		return notify_fail("你的内力不够练「天罡指」。\n");
	me->receive_damage("kee", 25);
	me->add("force", -5);
	return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("xiake") + "/tiangang-zhi/" + action;
}