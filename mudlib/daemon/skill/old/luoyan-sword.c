inherit SKILL;

mapping *action = ({
        ([      "action": "$N手中$w一颤左右一抖，一式「雁下芦洲」朝$n的$l直刺而去！",
          "lvl":10,
                "damage_type":  "刺伤"
        ]),
        ([      "action": "$N使出回风落雁剑法中的「长风飞雁」这招，风随剑势而起，向$n的$l刺去！",
          "lvl":18,
                "damage_type":  "刺伤"
        ]),
        ([      "action": "$N仰天长啸,一招“雁断胡天”排山倒海般向$n刺去！",
          "lvl":26,
                "damage_type":  "刺伤"
        ]),
        ([      "action": "$N纵身一跃，一招「星河一雁」$w化为点点寒星，罩向$n！",
          "lvl":32,
                "damage_type":  "刺伤"
        ]),
        ([      "action": "$N平剑一削,一片寒光中,一道剑影飞起，正是一招「芦雁南渡」!",
            "lvl":38,
                "damage_type":  "刺伤"
        ]),
        ([      "action": "$N手中$w回首一圈，一招「阳月飞雁」，手中$w化为一轮明月向$n飞去!！",
          "lvl":44,
                "damage_type":  "刺伤"
        ]),
         ([      "action": "$N一招「雏雁失群」，$w急颤数下，发出一阵悲鸣,刺向$n的咽喉！",
          "lvl":48,
                "damage_type":  "刺伤"
        ]),
        ([   "action": "$N一招「秋雁南回」，用$w向$n拍去，半途中手腕一转，$w已指向$n的头部！",
          "lvl":52,
                "damage_type":  "刺伤"
        ]),
      ([    "action": "$N脚下一个转身，一招「断雁悲鸣」，$w化为数道剑影紧紧缠住$n！",
          "lvl":55,
               "damage_type": "刺伤"
     ]),
      ([    "action": "$N一招「雁影千里」，$w化为一团精光，突然光影消散,$w已指到$n咽喉！",
          "lvl":58,
          "damage_type": "刺伤"
      ]),
      ([    "action": "$N长笑一声,，一招「鸿雁几时」，$w轻飘飘地向$n划出！",
          "lvl":61,
          "damage_type": "刺伤"
      ]),
      ([    "action": "$N惨然一笑，一招「心雁飞灭」，霎时空中雷声隐隐，神哭鬼号中$w笔直向$n的心房刺去！",
          "lvl":65,
         "damage_type": "刺伤"
        ]),
});

int valid_learn(object me)
{
        object ob;

        if( (int)me->query("max_force") < 50 )
    return notify_fail("你的内力不够，没有办法练回风落雁剑法。\n");

        if( (string)me->query_skill_mapped("force")!= "luoyan-xinfa")
                 return notify_fail("回风落雁剑法必须配合落雁心法才能练。\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "sword" )
                return notify_fail("你必须先找一把剑才能练剑法。\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="sword" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return 
notify_fail("你的内力或气不够，没有办法练习回风落雁剑法。\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
          write("你按著所学练了一遍回风落雁剑法。\n");
        return 1;
}

string perform_action_file(string action)
{
    return CLASS_D("xiake")+"/luoyan-sword/"+action;
}
 
