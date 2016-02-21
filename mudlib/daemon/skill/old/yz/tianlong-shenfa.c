// tianlong-shengfa 天龙身法 by ksusan 08/09/97 原少林身法

inherit SKILL;

mapping *action = ({
([	"action" : "$n一式「一苇渡江」，前后脚脚尖脚跟相靠，身体如行云流水般滑出丈余。\n",
	"dodge"  : 10
]),
([	"action" : "$n一式「雨燕掠波」，双臂前伸，全身贴地平飞，顿时闪过了$N的凌厉攻势。\n",
	"dodge"  : 20
]),
([	"action" : "$n一式「移步换形」，足不动，手不抬，一转眼间便绕到了$N的身后。\n",
	"dodge"  : 30
]),
([	"action" : "$n一式「分身化影」，一转身间，四面八方飘动着无数个$n的身影，令$N手无足措。\n",
	"dodge"  : 40
]),
([	"action" : "$n一式「孤骛落日」，全身笔直，拔地而起，在半空中一转，已落到几丈远的地方。\n",
	"dodge"  : 50
]),
([	"action" : "$n一式「鸿雁双飞」，两臂鹏举如翼，在剌剌风声中，从$N头顶横跃而过。\n",
	"dodge"  : 60
]),
([	"action" : "$n一式「苍龙出水」，双脚点地，全身化为一道白影，急速绕着$N打了几转。\n",
	"dodge"  : 70
]),
([	"action" : "$n一式「稚凤归巢」，身体如陀螺般急转，气流形成一个个漩涡，令$N陷身其间，动弹不得。\n",
	"dodge"  : 80
])
});

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int valid_enable(string usage)
{
	return usage == "dodge";
}

int valid_learn(object me)
{
	return 1;
}

string query_dodge_msg(string limb)
{
	object me, ob;
	mapping action;

	me = this_player();
	action = query_action(me, ob);

	return action["action"];
}

int practice_skill(object me)
{
	if(me->query("kee")<40)
		return notify_fail("你的体力太差了，不能练天龙身法。\n");
	me->receive_damage("kee",30);
	return 1;
}
