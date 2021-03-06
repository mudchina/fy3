// taiji-quan.c 太极拳
// 增加不同技能级别相应的学习和能使出的招数名, by ReyGod, in 12/17/1996
//      query_skill_name() and query_action()

inherit SKILL;

mapping *action = ({
([	"action" : "$N使一招「揽雀尾」，双手划了个半圈，按向$n的$l",
	"damage":50,
	"damage_type" : "瘀伤"
]),
([	"action" : "$N使一招「单鞭」，右手收置肋下，左手向外挥出，劈向$n的$l",
	"damage":56,
	"damage_type" : "瘀伤"
]),
([	"action" : "$N左手回收，右手由钩变掌，由右向左，使一招「提手上式」，向$n的$l打去",
	"damage":62,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N双手划弧，右手向上，左手向下，使一招「白鹤亮翅」，分击$n的面门和$l",
	"damage":68,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左手由胸前向下，身体微转，划了一个大圈，使一招「搂膝拗步」，击向$n的$l",
	"damage":74,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左手由下上挑，右手内合，使一招「手挥琵琶」，向$n的$l打去",
	"damage":80,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左手变掌横于胸前，右拳由肘下穿出，一招「肘底看锤」，锤向$n的$l",
	"damage":86,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左脚前踏半步，右手使一招「海底针」，指由下向$n的$l戳去",
	"damage":92,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N招「闪通臂」，左脚一个弓箭步，右手上举向外撇出，向$n的$l挥去",
	"damage":98,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N两手由相对，转而向左上右下分别挥出，右手使一招「斜飞式」，挥向$n的$l",
	"damage":104,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左手虚按，右手使一招「白蛇吐信」，向$n的$l插去",
	"damage":110,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N双手握拳，向前向后划弧，一招「双峰贯耳」打向$n的$l",
	"damage":116,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左手虚划，右手一记「指裆锤」击向$n的裆部",
	"damage":122,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N施出「伏虎式」，右手击向$n的$l，左手攻向$n的裆部",
	"damage":128,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N由臂带手，在面前缓缓划过，使一招「云手」，挥向$n的$l",
	"damage":134,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左腿收起，右手使一招「金鸡独立」，向$n的$l击去",
	"damage":140,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N右手由钩变掌，双手掌心向上，右掌向前推出一招「高探马」",
	"damage":146,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N右手使一式招「玉女穿梭」，扑身向$n的$l插去",
	"damage":152,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N右手经腹前经左肋向前撇出，使一招「反身撇锤」，向$n的$l锤去",
	"damage":158,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左手虚按，右腿使一招「转身蹬腿」，向$n的$l踢去",
	"damage":164,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左手向上划弧拦出，右手使一招「搬拦锤」，向$n的$l锤去",
	"damage":170,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N使一招「栽锤」，左手搂左膝，右手向下锤向$n的$l",
	"damage":180,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N双手先抱成球状，忽地分开右手上左手下，一招「野马分鬃」，向$n的$l和面门打去",
	"damage":190,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左手由胸前向下，右臂微曲，使一招「抱虎归山」，向$n的$l推去",
	"damage":200,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N双手经下腹划弧交于胸前，成十字状，一式「十字手」，向$n的$l打去",
	"damage":210,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N左脚踏一个虚步，双手交叉成十字拳，一招「进步七星」，向$n的$l锤去",
	"damage":220,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N身体向后腾出，左手略直，右臂微曲，使一招「倒撵猴」，向$n的$l和面门打去",
	"damage":230,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N双手伸开，以腰为轴，整个上身划出一个大圆弧，\n一招「转身摆莲」，将$n浑身上下都笼罩在重重掌影之中",
	"damage":240,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N双手握拳，右手缓缓收至耳际，左手缓缓向前推出，\n拳意如箭，一招「弯弓射虎」，直奔$n心窝而去",
	"damage":250,
        "damage_type" : "瘀伤"
]),
([	"action" : "$N双手在胸前翻掌，由腹部向前向上推出，一招「如封似闭」，一股劲风直逼$n",
	"damage":260,
        "damage_type" : "瘀伤"
]),
});

int valid_learn(object me)
{
        object ob;

        return 1;
}

int valid_enable(string usage)
{
        return usage=="unarmed" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
                return notify_fail("练太极拳必须空手。\n");
        if ((int)me->query_skill("taiji-shengong", 1) < 10)
                return notify_fail("你的太极神功火候不够，无法学太极拳。\n");
	if ((int)me->query("max_force")<100)
                return notify_fail("你的内力太弱，无法练太极拳。\n");
	if ((int)me->query("kee")<30)
                return notify_fail("你的体力太低了。\n");
	if ((int)me->query("force")<20)
                return notify_fail("你的内力不够练太极拳。\n");
	me->receive_damage("kee",25);
	me->add("force",-10);
        return 1;
}

string perform_action_file(string action)
{
        return __DIR__"taiji-quan/" + action;
}

int power_point()	{	return 1.5;	}
int hard_point()	{	return 2;	}
