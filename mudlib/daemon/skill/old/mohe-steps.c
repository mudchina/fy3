// mohe-steps.c
// 摩诃步
// made by cwj 97/7/6

inherit SKILL;

string *dodge_msg = ({
	"$n左一晃，右一闪，尽数避开$N的攻势。\n",
	"只见$n身形向上一窜，突然向后连翻三个空心筋斗，早已闪开$N的攻击。\n",
	"$n脚下不知如何移动，身形早变。\n",
	"但见$n身形不定，“忽”地一下闪到了$N的背后。\n",
	"却见$n不顾死活的着地滚了开去，狼狈的躲过$N的致命一招。\n",
	"$n下身不动，上身向后倒下，用一招「铁板桥」躲过了$N的进攻。\n",
	"猛然$n跃身半空，头下脚上突然坠地，险险的避开了$N的进攻！\n",
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("qi") < 40 )
		return notify_fail("你的体力太差了，无法练习摩诃步。\n");
		me->receive_damage("kee",30);
        return 1;
}

