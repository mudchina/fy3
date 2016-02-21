 // kunlun-shenfa.c by wangzc 30/8/97
 // 昆仑身法

inherit SKILL;

string *dodge_msg = ({
    "$n使出一式『翱游昆仑』，身形微摆，好整以暇却间不容发的躲过了$N的攻击。\n",
   "$n一招『雄鹰展翅』，迅疾无比的一个筋斗跃到了$N的身后，$N的招数全打在了空处。\n",
    "$n身随形转，使出一式『灵猴献桃』，滴溜溜转成一个陀螺轻易避开了$N的攻击。\n",
   "$n悠闲的使出一招『玉女穿梭』，幻化出无数人形，使$N的攻击无处可发。\n",
   "$n突然平扑向地面，接着一个空中半转身，以一式『苍鹰搏兔』躲了开去。\n",
});
string *dodge_msg_low = ({
// above item is not dodge skill in wuxian-steps, but is 本能反应
    "$n无奈使出一式『翱游昆仑』，身形急摆，勉强躲过了$N的攻击。\n",
    "$n一招『雄鹰展翅』，拖泥带水的一个筋斗跃到了$N的身后，$N的招数差点全打在$n身上。\n",
   "$n身随形转，使出一式『灵猴献桃』，滴溜溜转成一个陀螺堪堪避开了$N的攻击。\n",
   "$n勉力使出『玉女穿梭』，幻化出几个人形，但却差点被$N的打中。好险！\n",
   "$n突然平扑向地面，接着一个空中马趴，以一式『苍鹰搏兔』灰头土脸躲了开去。\n",
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 20 )
        return notify_fail("你的体力太差了，无法练习昆仑心法。\n");
        me->receive_damage("kee",25);
        return 1;
}

