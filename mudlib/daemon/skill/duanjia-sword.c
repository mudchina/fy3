// duanjia-sword.c 段家剑

inherit SKILL;

mapping *action = ({
([  "action" : "$N向前跨上一步，一招「云横秦岭」，手中$w自左向右向$n的$l
缓缓划去",
	"damage":60,
    "damage_type" : "刺伤"
]),
([  "action" : "$N向上跃起，左手剑诀，右手一抖，$w剑光缦妙如瀑，一式「飞流
直下」直刺$n的$l",
	"damage":80,
    "damage_type" : "刺伤"
]),
([  "action" : "$N一招「雪涌兰关」，$w闪起数道寒光，自下而上反挑$n的$l",
	"damage":100,
    "damage_type" : "刺伤"
]),
([  "action" : "$N一招「奇兵突起」，手中$w看似横扫实则斜劈，刺向$n的$l",
	"damage":120,
    "damage_type" : "刺伤"
]),
([  "action" : "$N使出「夜叉探海」，$w挽出三个剑花，绵绵不断划向$n的$l",
	"damage":140,
    "damage_type" : "刺伤"
]),
([  "action" : "$N一招「泰山压顶」，左手一捏剑诀，右手$w自上而下雷霆万钧
般直向$n的$l劈乐下去",
	"damage":160,
    "damage_type" : "刺伤"
]),
([  "action" : "$N一招「雨打梨花」，身在半空，$w回抽，反手勾向$n的$l",
	"damage":180,
    "damage_type" : "刺伤"
]),
([  "action" : "$N身影一晃, 绕到$n背后，一招「逐鹿中原」，剑尖向$n的$l疾挑",
	"damage":200,
    "damage_type" : "刺伤"
]),
});


int valid_enable(string usage) { return (usage == "sword")||(usage=="staff")||(usage=="parry"); }

int valid_learn(object me)
{
	if((int)me->query("max_force")<100)
       return notify_fail("你的内力不够。\n");
    if ((int)me->query_skill("kurong-changong", 1) < 20)
       return notify_fail("你的枯荣禅功火候太浅。\n");
    return 1;
}
mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

string perform_action_file(string action)
{
	return __DIR__"duanjia-jian/"+action;
}
int power_point()	{	return 1.3;	}
