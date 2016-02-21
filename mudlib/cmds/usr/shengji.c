#include <ansi.h>

inherit F_CLEAN_UP;

mapping valid_types = ([
        "unarmed":      "拳脚",
        "sword":        "剑法",
        "blade":        "刀法",
        "club":         "棍法",
        "staff":        "杖法",
        "throwing":     "暗器",
        "force":        "内功",
        "parry":        "招架",
        "dodge":        "轻功",
        "hammer":       "锤法",
        "axe":          "斧法",
        "whip":         "鞭法",
]);

int main(object me, string arg)
{
        string skill,target;
        object master;
        int money,level,point,my_skill,master_skill;
        int betrayer;
        mapping my_skl,you_skl,lrn;
        if(! arg)       return notify_fail("命令格式：shengji <武功名> from <师父名>\n");
        if(sscanf(arg,"%s from %s",skill,target)!=2)
                return notify_fail("命令格式：shengji <武功名> from <师父名>\n");
        master=present(target,environment(me));
        if(! objectp(master))
                return notify_fail("这儿没有这么个人。\n");
        if(! master->is_character())
                return notify_fail("看清楚！它并不是个生物。\n");
        if(! living(master))
                return notify_fail("你得先把他弄醒再说。\n");
        if(master==me)
                return notify_fail("自己升自己？\n");
        if ( !me->is_apprentice_of(master))      {
                notify_fail("只有你的师傅或同帮会的一些兄弟才能升级你的武功。\n");
                if( ! master->recognize_apprentice(me)) return 0;
        }
        my_skl=me->query_skills();
        if(! mapp(my_skl))      my_skl=([]);
        if(undefinedp(my_skl[skill]))
                return notify_fail("你并没有学过这门武功。\n");
        if( SKILL_D(skill)->type()!="martial")
                return notify_fail("你只能升级武功。\n");
        you_skl=master->query_skills();
        if(! mapp(you_skl))     you_skl=([]);
        if(! you_skl[skill])    {
                return notify_fail("对方似乎不会这门武功，无法帮你升级。\n");
        }
        if(my_skl[skill]>=you_skl[skill])       {
                return notify_fail("你的武功等级已超过他了！\n");
        }
        if(! (point=SKILL_D(skill)->hard_point()))  point=1;
        my_skill = me->query_skill(skill,1);
        if( betrayer = me->query("betrayer") )
              {if( my_skill >= (master_skill - betrayer * 20 ))
 {       message_vision("$N神色间似乎对$n不是十分信任，也许是想起$p从前背叛师门的事情 ...。\n",master,me);
command("say 嗯 .... 师父能教你的都教了，其他的你自己练吧。");
return notify_fail(master->name() + "不愿意教你这项技能。\n");
}
}
// return notify_fail("你的师傅想到你以前曾经背叛师门，不愿意教你功夫了。。\n");
        lrn=me->query_learned();
        if(! lrn)       lrn=([]);
        if(lrn[skill]<(my_skl[skill]+1)*(my_skl[skill]+1)*point*point)
                return notify_fail("你还没有资格升级这项武功。\n");

        if(my_skl[skill]*my_skl[skill]*my_skl[skill]/10 >
        (int)me->query("combat_exp"))   
                return notify_fail("你的实战经验不够，无法升级这项武功。\n");

        if( valid_types[skill]) money=my_skl[skill]*my_skl[skill]/2;
        else                    money=my_skl[skill]*my_skl[skill];
        if(money==0)    money=1;
        money*=2;
        if(! me->pay_money(money))      {
                message_vision(HIY"$N叹了口气道：$n身上的钱不够，至少得"+
                MONEY_D->money_str(money)+"啊。\n"NOR,master,me);
                return 1;
        }
        message_vision("$N交给$n"+MONEY_D->money_str(money)+"。\n",me,master);
        me->improve_skill(skill,1);
        return 1;
}
int help(object me)
{
        write(@HELP
指令格式：shengji <武功名称> from <师父或同帮弟兄>

这条指令用来升级你自己的武功等级。
只有通过战斗或是完成任务，你才能获得升级武功等级的机会。当
你的武功修为达到一定点数后，使用skills命令会发现此项武功已
变红色，说明该武功已达到升级的条件。
在武功等级小于30级时，你可以在战斗中或是分配(fenpei)指令来
完成武功的升级。但在30级之后，你必须花一定的钱，在师父或是
同帮会弟兄的帮助下，此武功才会升一级。俗话说的好，穷文富武
。在你不断练武修行之时，别忘了多赚些钱。
 
HELP
        );
        return 1;
}
