// lingboweibu.c 凌波微步

inherit SKILL;

string *dodge_msg = ({
	"只见$n左一步，右一步，轻而易举的躲过$N这一招。\n",
	"但是$n身形一动，从不可思义的角度转过身来，避开了$N的攻击。\n",
	"然而$n却不退反进，脚下步点变幻莫测，反使$N的攻势全部落空。\n"
        "但是$n身形飘忽，忽前忽后，忽左忽右，让$N无法下手。\n",
        "可是$n身随意转，脚步微变，人竟已在三丈之外，闪过了这一招。\n",
        
        });

int valid_enable(string usage) 
{ 
	return usage=="dodge";
}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if((int)me->query("kee")<40)
                return notify_fail("你的体力太差了，不能练凌波微步。\n");
	me->receive_damage("kee",30);
        return 1;
}

int power_point()	{	return 2;	}
int hard_point()	{	return 3;	}

