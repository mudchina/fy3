//jiuyin-baiguzhao.c
#include <ansi.h>
inherit SKILL;

mapping *action = ({
([  "action" : "$N左爪虚晃，右爪蓄力，一招「勾魂夺魄」直插向$n的$l",
    "force" : 320,
    "dodge" : -30,
    "parry" : -10,
    "damage": 30,
    "lvl"   : 0,
    "skill_name" : "勾魂夺魄" ,
        "damage_type" : "抓伤"
]),
([  "action" : "$N双手连环成爪，爪爪钩向$n，「九子连环」已向$n的$l抓出",
    "force" : 400,
    "dodge" : -40,
    "parry" : -20,
    "damage": 60,
    "lvl"   : 20,
    "skill_name" : "九子连环" ,
        "damage_type" : "抓伤"
]),
([  "action" : "$N身形围$n一转，使出「天罗地网」，$n的$l已完全笼罩在爪影下",
    "force" : 600,
    "dodge" : -50,
    "parry" : -30,
    "damage": 90,
    "lvl"   : 40,
    "skill_name" : "天罗地网" ,
        "damage_type" : "抓伤"
]),
([  "action" : "$N使一招「风卷残云」，双爪幻出满天爪影抓向$n全身",
    "force" : 800,
    "dodge" : -50,
    "parry" : -40,
    "damage": 120,
    "lvl"   : 60,
    "skill_name" : "风卷残云" ,
        "damage_type" : "抓伤"
]),
([  "action" : "$N吐气扬声，一招「唯我独尊」双爪奋力向$n天灵戳下",
    "force" : 1000,
    "dodge" : -50,
    "parry" : -50,
    "damage": 150,
    "lvl"   : 80,
    "skill_name" : "唯我独尊" ,
    "damage_type" : "抓伤"
]),
([ "action" : "$N双掌不住地忽伸忽缩，手臂关节喀喇声响，右掌一立，左掌啪的一下朝$n$l击去",
   "force" : 300,
   "dodge" : -45,
   "parry" : -60,
   "damage": 170,
   "lvl" : 100,
   "damage_type" : "瘀伤"
]),
([ "action" : "$N身形挫动，风声虎虎，接着朝$n连发八掌，一掌快似一掌，一掌猛似一掌",
   "force" : 600,
   "dodge" : -50,
   "parry" : -70,
   "damage": 190,
   "lvl" : 110,
   "damage_type" : "瘀伤"
]),
([ "action" : "$N攸地变爪为掌，身子不动，右臂陡长，潜运内力，一掌朝$n$l劈去",
   "force" : 900,
   "weapon" : "掌缘",
   "dodge" : -35,
   "parry" : -80,
   "damage": 210,
   "lvl" : 120,
   "damage_type" : "割伤"
]),
([ "action" : "$N一声怪啸，形如飘风，左掌已如风行电挚般拍向$n，掌未到，风先至，迅猛已极",
   "force" : 1000,
   "dodge" : -10,
   "parry" : -90,
   "damage": 230,
   "lvl" : 130,
   "damage_type" : "瘀伤"
]),
});


int valid_enable(string usage) { return usage=="unarmed" ||  usage=="parry"; }
int valid_learn(object me)
{      if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
        return notify_fail("练九阴白骨爪必须空手。\n");
       if ((int)me->query("max_force") < 700)
        return notify_fail("你的内力太弱，无法练九阴白骨爪。\n");
       if ((int)me->query_skill("jiuyin-shengong", 1) < 1)
        return notify_fail("你没有九阴神功的根基，难以理解九阴白骨爪。 \n");
       if ((int)me->query_skill("unarmed", 1) < 150)
        return notify_fail("你的徒手搏击火候不够，无法学习。\n");
       if ((int)me->query_skill("jiuyin-shengong", 1) < (int)me->query_skill("jiuyin-baiguzhao",1))
        return notify_fail("就这么点九阴神功还想学九阴白骨爪？\n");
       if (!(me->query("family/master_id") == "zhou zhiruo") &&  (!(present("jiuyin zhenjing", me)) ))
        return notify_fail("九阴白骨爪深奥无比，看样子你是不能领会的了,去找<九阴真经>来看看?\n");
        return 1;
}

string query_skill_name(int level)
{
        int i;
        for(i = sizeof(action); i > 0; i--)
                if(level >= action[i-1]["lvl"])
                        return action[i-1]["skill_name"];
}

mapping query_action(object me, object weapon)
{
        int i, level;
    level   = (int) me->query_skill("jiuyin-baiguzhao",1);
        for(i = sizeof(action); i > 0; i--)
                if(level > action[i-1]["lvl"])

        return action[random(sizeof(action))];
}
int practice_skill(object me)
{      if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
        return notify_fail("练九阴白骨爪必须空手。\n");
        if ((int)me->query("kee") < 30)
                return notify_fail("你的体力太低了。\n");
        if ((int)me->query("force") < 20)
        return notify_fail("你的内力不够练九阴白骨爪。\n");
       if ((int)me->query_skill("jiuyin-shengong", 1) < 1)
        return notify_fail("你没有九阴神功的根基，怎么也学不会九阴白骨爪。 \n");
       if ((int)me->query_skill("unarmed", 1) < 150)
        return notify_fail("你的徒手搏击火候不够，无法学习。\n");
       if ((int)me->query_skill("jiuyin-shengong", 1) < (int)me->query_skill("jiuyin-baiguzhao",1))
        return notify_fail("你不加强九阴神功就去练九阴白骨爪会走火入魔的!! \n");
       if (!(me->query("family/master_id") == "zhou zhiruo") &&  (!(present("jiuyin zhenjing", me)) ))
        return notify_fail("九阴白骨爪深奥无比，看样子你是不能领会的了,去找<九阴真经>来看看?\n");
        me->receive_damage("kee", 30);
       me->add("force", -20);
        return 1;
}
void skill_improved(object me)
{
    tell_object(me, HIR "你忽然从心底生出一股恶念：杀、杀、杀！我要杀绝天下人！\n" NOR );
    me->add("mingwang", -(me->query_skill("jiuyin-shengong", 1)*500));
}
mixed hit_ob(object me, object victim, int damage_bonus)
{
        if( damage_bonus < 100 ) return 0;

        if( random(damage_bonus/2) > victim->query_str() ) {
                victim->receive_wound("qi", (damage_bonus - 100)/2);
                return HIR "你听到「喀啦」一声轻响，竟似是骨碎的声音！\n" NOR;
        }
}
string perform_action_file(string action)
{
        return __DIR__"jiuyin-baiguzhao/" + action;
}
